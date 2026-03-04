#include <stdio.h>
#include <math.h>
int main()
{
	double x,y;
	printf("求平方根\n输入数字:"); 
	scanf("%lf",&x);
	if(x>=0)
	{
		printf("结果是：%lf",sqrt(x));
	}
	else
	{
		printf("无平方根"); 
	} 
}
