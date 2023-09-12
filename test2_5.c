#include <stdio.h>

int main() {
    int number;

    // 提示用户输入一个数字
    //printf("请输入一个1到9之间的数字：");
    scanf("%d", &number);

    if (number >= 1 && number <= 9) {
        // 进行一系列运算
        number = (number * 3 + 3) * 3;
        int unitsDigit = number % 10;
        int tensDigit = number / 10;

        // 输出结果
        int result = unitsDigit + tensDigit;
        printf("%d\n", result);
    } else {
        printf("输入不在1到9的范围内。\n");
    }

    return 0;
}
