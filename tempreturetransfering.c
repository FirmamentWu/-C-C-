#include <stdio.h>

int main() {
     double fahrenheit,celsius;
     //这里不再使用d了因为不是decimal了而是双精度浮点说double long float为double
    scanf("%lf",&fahrenheit);
    celsius=5*(fahrenheit -32)/9;
    printf("c=%.2lf\n",celsius);
    //这里的点号是正则表达式，只保留两位小数的含义
}