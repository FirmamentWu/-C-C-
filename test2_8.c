#include <stdio.h>
#include <math.h>

int main() {
    double diameter1;
    double diameter2;
    double density = 11340.0; // 铅密度，单位：kg/m^3
    double pi = 3.141592657;
    //double diameter = 9.8 / 100.0; // 直径，转换为米
    scanf("%lf %lf",&diameter1,&diameter2);
    //空格分隔直接在scanf中的占位符之间点空格即可

    // 计算铅球的体积
    double radius1 = diameter1 / 2.0/100;
    double radius2 = diameter2 / 2.0/100;
    double volume1 = (4.0 / 3.0) * pi * radius1 * radius1 * radius1;
    double volume2 = (4.0 / 3.0) * pi * radius2 * radius2 * radius2;

    // 计算铅球的重量
    double weight1 = density * volume1;
    double weight2 = density * volume2;
    double Trueweight=fabs(weight2-weight1);

    // 输出铅球的重量
    printf("%f\n", Trueweight);

    return 0;
}