#include <stdio.h>
#include <math.h>
#include <string.h>

#define WayPoints_NO 500

struct WayPoints
{
    double x;
    double y;
    double theta;
};

struct WayPoints my_waypoints_list[WayPoints_NO];
int no_waypoints = -1;

void ToLatLon(double utmX, double utmY, const char* utmZone, double* latitude, double* longitude)
{
    int isNorthHemisphere = utmZone[strlen(utmZone) - 1] >= 'N';
    double diflat = -0.00066286966871111111111111111111111111;
    double diflon = -0.0003868060578;

    int zone;

    sscanf(utmZone, "%d", &zone);

    double c_sa = 6378137.000000;
    double c_sb = 6356752.314245;
    double e2 = sqrt((pow(c_sa, 2) - pow(c_sb, 2))) / c_sb;
    double e2cuadrada = pow(e2, 2);
    double c = pow(c_sa, 2) / c_sb;
    double x = utmX - 500000;
    double y = isNorthHemisphere ? utmY : utmY - 10000000;
    
    double s = ((zone * 6.0) - 183.0);
    double lat = y / (c_sa * 0.9996);
    double v = (c / sqrt(1 + (e2cuadrada * pow(cos(lat), 2)))) * 0.9996;
    double a = x / v;
    double a1 = sin(2 * lat);
    double a2 = a1 * pow((cos(lat)), 2);
    double j2 = lat + (a1 / 2.0);
    double j4 = ((3 * j2) + a2) / 4.0;
    double j6 = ((5 * j4) + pow(a2 * (cos(lat)), 2)) / 3.0;
    double alfa = (3.0 / 4.0) * e2cuadrada;
    double beta = (5.0 / 3.0) * pow(alfa, 2);
    double gama = (35.0 / 27.0) * pow(alfa, 3);
    double bm = 0.9996 * c * (lat - alfa * j2 + beta * j4 - gama * j6);
    double b = (y - bm) / v;
    double epsi = ((e2cuadrada * pow(a, 2)) / 2.0) * pow((cos(lat)), 2);
    double eps = a * (1 - (epsi / 3.0));
    double nab = (b * (1 - epsi)) + lat;
    double senoheps = (exp(eps) - exp(-eps)) / 2.0;
    double delt = atan(senoheps / (cos(nab)));
    double tao = atan(cos(delt) * tan(nab));

    *longitude = ((delt * (180.0 / M_PI)) + s) + diflon;
    *latitude = ((lat + (1 + e2cuadrada * pow(cos(lat), 2) - (3.0 / 2.0) * e2cuadrada * sin(lat) * cos(lat) * (tao - lat)) * (tao - lat)) * (180.0 / M_PI)) + diflat;
}

int main(void)
{
    int result;
    double temp1, temp2, temp3;
    double utmX, utmY, latitude, longitude;
    
    const char* utmZone = "52N";

    FILE *fp_read, *fp_write;
    fp_read = fopen("shark_full.txt", "r");
    fp_write = fopen("gps_utm_to_lla.txt", "w"); 

    if (fp_read == NULL)  
    {
        printf("Error, Cannot read file\n");
        return 1;
    }

    if (fp_write == NULL)  
    {
        printf("Error, Cannot open gps_utm_to_lla.txt for writing\n");
        fclose(fp_read); 
        return 1;
    }

    do
    {
        ++no_waypoints;
        result = fscanf(fp_read, "%lf %lf %lf", &temp1, &temp2, &temp3);

        if (result != EOF)
        {
            my_waypoints_list[no_waypoints].x = temp1;
            my_waypoints_list[no_waypoints].y = temp2;
            my_waypoints_list[no_waypoints].theta = temp3;

            // Convert UTM to Latitude/Longitude
            ToLatLon(temp1, temp2, utmZone, &latitude, &longitude);

            // Print the original and converted coordinates
            printf("UTM Coordinates: X: %9.6lf, Y: %9.6lf, Zone: %s\n", temp1, temp2, utmZone);
            printf("Converted to Latitude/Longitude: Latitude: %9.6lf, Longitude: %9.6lf\n\n", latitude, longitude);

            // Write the converted coordinates to the output file
            fprintf(fp_write, "%9.6lf %9.6lf %9.6lf\n", latitude, longitude, temp3);
        }
    } while (result != EOF);

    --no_waypoints;

    fclose(fp_read);   
    fclose(fp_write);

    return 0;
}
