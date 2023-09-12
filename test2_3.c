#include<stdio.h>

int main()

{

        int a,b;

        unsigned int u;

        char ch;

        float f;

        a=100;

        b=65535;

        u=b;

        ch='A';

        f=32.17;

        printf("a=%d\t",a);

        printf("b=%d\n",b);

        printf("u=%u\t",u);

        printf("f=%f\n",f);

        printf("ch is %c ",ch);

        printf("and value is %d.\n",ch);
        //这时候character就会转为int，因为占位符%d是decimal

        printf("I   love this program.\rYou\n");
        //转义字符区分了整段话么？\rYou代表了一部分执行完，续上之前的输出\n再执行

        return 0;
}