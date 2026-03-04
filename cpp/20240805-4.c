#include <stdio.h> 
int main()
{
int a,b;
a=10;
//b=a++;//++针对的变量位置，a++,先使用a，后自加
b=++a ;//先把a自加，再赋给b 
printf("%d",b);//函数调用语句，表输出 
;//空语句 
}
