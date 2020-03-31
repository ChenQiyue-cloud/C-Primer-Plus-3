/*7.1英寸相当于2.54厘米。编写一个程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高。*/
#include<stdio.h>
int main()
{
    double height_inch,height_cm;

    printf("Please enter your height(inch):");
    scanf("%lf",&height_inch);
    height_cm = height_inch * 2.54;
    printf("Your height is %.2lfcm.\n",height_cm);

    return 0;
}
