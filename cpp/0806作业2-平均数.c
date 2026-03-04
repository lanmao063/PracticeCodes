#include <stdio.h>
#include <math.h>
int main()
{
   float x1,x2,x3;
   float average;
   printf("求平均数（精度为5位小数）\n"); 
   printf("请输入三个数字(以空格分隔):");   
   scanf("%f %f %f",&x1,&x2,&x3);
   average = (x1+x2+x3)/3; 
   printf("平均数＝%5.5f\n",average); 
}
