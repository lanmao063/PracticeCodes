#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;//方程系数 
	float x1,x2;
	printf("依次输入系数a b c,用空格作分隔，用回车确定：");
	scanf("%d %d %d",&a,&b,&c);
	 x1=(-b+sqrt(b*b-4*a*c))/2*a;
	 x2=(-b-sqrt(b*b-4*a*c))/2*a;
	 printf("结果为\n");
	 printf("x1=%f\nx2=%f",x1,x2);
}
