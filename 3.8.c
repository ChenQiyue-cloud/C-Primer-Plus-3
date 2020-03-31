/*8.在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等于2大
汤勺，1大汤勺等于3茶勺。编写一个程序，提示用户输入杯数，并以品脱、盎
司、汤勺、茶勺为单位显示等价容量。思考对于该程序，为何使用浮点类型比
整数类型更合适？*/
#include<stdio.h>
int main()
{
    double pints,cups,ounces,big_spoons,tea_spoons;

    printf("Please enter the number of cups:");
    scanf("%lf",&cups);

    pints = cups / 2;
    ounces = cups * 8;
    big_spoons = cups * 16;
    tea_spoons = cups * 48;

    printf("%.3lf cups = %.3lf pints.\n",cups,pints);
    printf("%.3lf cups = %.3lf ounces.\n",cups,ounces);
    printf("%.3lf cups = %.3lf big spoons.\n",cups,big_spoons);
    printf("%.3lf cups = %.3lf tea spoons.\n",cups,tea_spoons);

    return 0;
}
