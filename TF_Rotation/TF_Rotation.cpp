#include "stdafx.h"
#define _USE_MATH_DEFINES
#include "math.h"

#define RAD2DEG(x)   x*180/M_PI
#define DEG2RAD(x)   x/180*M_PI

typedef struct
{
	double x;
	double y;
	double theta;
} Pose2D;

typedef struct
{
	double x;
	double y;
} Point2D;


Pose2D    base_link_origin;
Point2D   base_link_Point2D, base_link_map_Point2D;

double angle_degree;
double angle_radian;

double Rotation_matrix_inverse[2][2];
double Rotation_matrix[2][2];

void set_rotation_matrix(double m_angle_degree)
{
	angle_radian = DEG2RAD(m_angle_degree);

	Rotation_matrix[0][0] = cos(angle_radian); Rotation_matrix[0][1] = -sin(angle_radian);
	Rotation_matrix[1][0] = sin(angle_radian); Rotation_matrix[1][1] = cos(angle_radian);
}

void set_rotation_matrix_inverse(double m_angle_degree)
{
	angle_radian = DEG2RAD(m_angle_degree);

	Rotation_matrix_inverse[0][0] = cos(angle_radian);  Rotation_matrix_inverse[0][1] = sin(angle_radian);
	Rotation_matrix_inverse[1][0] = -sin(angle_radian); Rotation_matrix_inverse[1][1] = cos(angle_radian);
}

void TF_base_link_base_link_map()
{
	set_rotation_matrix(angle_degree);
	base_link_map_Point2D.x = Rotation_matrix[0][0] * base_link_Point2D.x + Rotation_matrix[0][1] * base_link_Point2D.y;
	base_link_map_Point2D.y = Rotation_matrix[1][0] * base_link_Point2D.x + Rotation_matrix[1][1] * base_link_Point2D.y;

	printf("\n\n");
	printf("base_link         -> base_link_map\n");
	printf("(%6.3lf , %6.3lf) -> (%6.3lf , %6.3lf)\n", base_link_Point2D.x, base_link_Point2D.y, base_link_map_Point2D.x, base_link_map_Point2D.y);
}

void TF_base_link_map_base_link()
{
	set_rotation_matrix_inverse(angle_degree);
	base_link_Point2D.x = Rotation_matrix_inverse[0][0] * base_link_map_Point2D.x + Rotation_matrix_inverse[0][1] * base_link_map_Point2D.y;
	base_link_Point2D.y = Rotation_matrix_inverse[1][0] * base_link_map_Point2D.x + Rotation_matrix_inverse[1][1] * base_link_map_Point2D.y;

	printf("\n\n");
	printf("base_link_map     -> base_link\n");
	printf("(%6.3lf , %6.3lf) -> (%6.3lf , %6.3lf)\n", base_link_map_Point2D.x, base_link_map_Point2D.y, base_link_Point2D.x, base_link_Point2D.y);
}

int _tmain(int argc, _TCHAR* argv[])
{
	//angle_degree = 90;
	//angle_radian = DEG2RAD(angle_degree);

	base_link_origin.x = 0.0;
	base_link_origin.y = 0.0;
	base_link_origin.theta = 90;

	//	base_link_Point2D.x = 1;
	//	base_link_Point2D.y = 1;

	printf("좌표(x,y)= ");
	scanf("%lf %lf", &base_link_Point2D.x, &base_link_Point2D.y);

	printf("회전할 각도 = ");
	scanf("%lf", &angle_degree);

	//	base_link_map_Point2D.x = 0.1; 
	//	base_link_map_Point2D.y = 0.1;

	TF_base_link_base_link_map();
	TF_base_link_map_base_link();

	return 0;
}
