#include <stdio.h>

#define No_Calibration_Point 5

struct CalibrationData {
    double X[No_Calibration_Point];
    double y[No_Calibration_Point];
}cal_data;

double linear_mapping(double x, struct CalibrationData cal_data)
{
    // �Է� ���� X ���� ���� �ִ��� Ȯ��
    if (x <= cal_data.X[0]) {
        // �����Ϳ� ���� ������ ���, 0��°�� 1��° �����ͷ� ���� ������ ���
        double x1 = cal_data.X[0];
        double x2 = cal_data.X[1];
        double y1 = cal_data.y[0];
        double y2 = cal_data.y[1];
        double y = y1 + (x - x1) * ((y2 - y1) / (x2 - x1));
        return y;
    }
    else if (x >= cal_data.X[No_Calibration_Point - 1]) {
        // �����Ϳ� ���� ������ ���, N-2��°�� N-1��° �����ͷ� ���� ������ ���
        double x1 = cal_data.X[No_Calibration_Point - 2];
        double x2 = cal_data.X[No_Calibration_Point - 1];
        double y1 = cal_data.y[No_Calibration_Point - 2];
        double y2 = cal_data.y[No_Calibration_Point - 1];
        double y = y1 + (x - x1) * ((y2 - y1) / (x2 - x1));
        return y;
    }

    // �Է� ���� X ���� ������ ��� ������ ���ϴ��� ã��
    int i;
    for (i = 0; i < No_Calibration_Point - 1; i++) {
        if (x >= cal_data.X[i] && x < cal_data.X[i + 1]) {
            break;
        }
    }

    // ���� ������ ���� ��� �� ���
    double x1 = cal_data.X[i];
    double x2 = cal_data.X[i + 1];
    double y1 = cal_data.y[i];
    double y2 = cal_data.y[i + 1];
    double y = y1 + (x - x1) * ((y2 - y1) / (x2 - x1));

    return y;
}

int main()
{
    cal_data = {
        //{0.0, 255.75, 511.5, 767.25, 1023.0},  // X ����
        {0.0, 1.0, 2.0, 3.0, 4.0},
        {-30.0, -15.0, 0.0, 15.0, 30.0}  // y ��
    };

    double x = -2;
    double mapped_value = linear_mapping(x, cal_data);
    printf("Mapped value: %.2f\n", mapped_value);

    return 0;
}