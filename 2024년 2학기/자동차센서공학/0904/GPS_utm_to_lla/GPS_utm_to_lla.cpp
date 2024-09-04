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

void init_waypoints(const char* file_path)
{
    FILE *fp_read = fopen(file_path, "r");

    if (fp_read == NULL)  
    {
        printf("Error: Cannot open file %s\n", file_path);
        return;
    }

    int result;
    double temp1, temp2, temp3;

    no_waypoints = -1;

    do
    {
        ++no_waypoints;
        result = fscanf(fp_read, "%lf %lf %lf", &temp1, &temp2, &temp3);

        if (result == 3)  // Ensure that fscanf successfully read 3 values
        {
            my_waypoints_list[no_waypoints].x = temp1;
            my_waypoints_list[no_waypoints].y = temp2;
            my_waypoints_list[no_waypoints].theta = temp3;
        }
        else if (result == EOF)
        {
            if (no_waypoints >= 0)  // Adjust if no valid data was read
            {
                no_waypoints--;  
            }
            break;
        }
    } while (result != EOF && no_waypoints < WayPoints_NO - 1);

    fclose(fp_read);
}

int main(void)
{
    double latitude, longitude;
    const char* utmZone = "52N";
    const char* input_file = "shark_full.txt";
    const char* output_file = "gps_utm_to_lla.txt";

    init_waypoints(input_file);

    FILE *fp_write = fopen(output_file, "w");

    if (fp_write == NULL)  
    {
        printf("Error, Cannot open %s for writing\n", output_file);
        return 1;
    }

    for (int i = 0; i <= no_waypoints; i++)
    {
        double utmX = my_waypoints_list[i].x;
        double utmY = my_waypoints_list[i].y;
        double theta = my_waypoints_list[i].theta;

        // Convert UTM to Latitude/Longitude
        ToLatLon(utmX, utmY, utmZone, &latitude, &longitude);

        // Print the original and converted coordinates
        printf("Waypoints[%d] UTM Coordinates: X: %9.6lf, Y: %9.6lf, Zone: %s\n", i, utmX, utmY, utmZone);
        printf("Waypoints[%d] Converted to Latitude/Longitude: Latitude: %9.6lf, Longitude: %9.6lf\n\n", i, latitude, longitude);

        // Write the converted coordinates to the output file
        fprintf(fp_write, "%9.6lf %9.6lf %9.6lf\n", latitude, longitude, theta);
    }
    
    // Display the number of waypoints
    printf("Number of waypoints: %d\n", no_waypoints + 1);
    fclose(fp_write);

    return 0;
}
