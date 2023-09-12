#include <stdio.h>

int main() {
    int number;
    
    // 提示用户输入一个5位数
    //printf("请输入一个5位数: ");
    scanf("%d", &number);
    
    // 分割并打印各个数位上的数字
    int digit1 = number / 10000;   // 万位
    int digit2 = (number / 1000) % 10;  // 千位
    int digit3 = (number / 100) % 10;   // 百位
    int digit4 = (number / 10) % 10;    // 十位
    int digit5 = number % 10;          // 个位
    
    // 打印输出，使用3个空格间隔
    printf("%d   %d   %d   %d   %d\n", digit1, digit2, digit3, digit4, digit5);
    
    return 0;
}
