#include<stdio.h>

int main()

{

        float x,y,z;

        x=5/2;

        y=5/2*1.0;//因为乘除法的优先级相同，所以是从左边到右边计算，第一个就已经是2了再乘以1.0，再转成浮点数

        z=1.0*5/2;

        printf("x=%f\n",x);

        printf("y=%f\n",y);

        printf("z=%f\n",z);

        return 0;

}