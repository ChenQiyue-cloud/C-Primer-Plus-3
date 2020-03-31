/*5.一年大约有3.156*10^7秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。*/
#include<stdio.h>
int main()
{
    const double seconds_one_year = 3.156e7;
    int age = 0;

    printf("Please enter your age:");
    scanf("%d",&age);

    printf("seconds = %.2lf\n",age*seconds_one_year);
    printf("seconds = %e\n",age*seconds_one_year);  //科学计数法

    return 0;
}
