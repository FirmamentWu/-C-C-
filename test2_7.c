#include <stdio.h>

int main() {
    double diameter;
    double density = 11340.0; // 铅密度，单位：kg/m^3
    double pi = 3.141592657;
    //double diameter = 9.8 / 100.0; // 直径，转换为米
    scanf("%lf",&diameter);

    // 计算铅球的体积
    double radius = diameter / 2.0/100;
    double volume = (4.0 / 3.0) * pi * radius * radius * radius;

    // 计算铅球的重量
    double weight = density * volume;

    // 输出铅球的重量
    printf("%f\n", weight);

    return 0;
}
