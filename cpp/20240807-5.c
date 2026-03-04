#include <stdio.h>
#include <math.h>
int main()
{
	double a,b;
	printf("比较大小\n输入两个数并以空格作分隔："); 
	scanf("%lf %lf",&a,&b);
	if(a>b)
	{
		printf("%lf更大",a);
	}
	else
	{
		printf("%lf更大",b);
	}
}
