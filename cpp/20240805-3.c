#include <stdio.h> 
int main()
{
int a,b,c;
a=10;
b=100;
c=1000;
a=a*a;//把a平方的结果赋值给a 
a*=a;//同上 
a+=1;
a=a+1;//同上
a*=b+c; 
a++;//同10行，自增运算 
 
printf("%d",a);
}
