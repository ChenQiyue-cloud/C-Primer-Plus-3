/*2.编写一个程序，要求提示输入一个ASCII码值（如，66），然后打印输入的字符。*/
#include<stdio.h>
int main()
{
    int ch = 0;

    printf("Please enter an ASCII value:");
    scanf("%d",&ch);
    printf("the character:%c\n",(char)ch);  //类型转换,即使不加（char）编译器也会自动转换

    return 0;
}
