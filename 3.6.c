/*6.1个水分子的质量约为3.0*10^(-23)克。一夸脱水大约是950克。编写一个程序，
提示用户输入水的夸脱数，并显示水分子的数量。*/
#include<stdio.h>
#define WATER_M 3e-23
int main()
{
    double quart,num_water;
    printf("Please input the quart number of water:");
    scanf("%lf",&quart);
    num_water = quart * 950 / WATER_M;
    printf("Number of water molecules: %le",num_water);

    return 0;
}
