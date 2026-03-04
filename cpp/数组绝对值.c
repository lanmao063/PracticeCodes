#include <stdio.h>
int main()
{
	int n;
	printf("输入变量个数：");
	scanf ("%d ",&n);
	float a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		if(a[i]<0)
		{
			a[i]=-a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%.3f\n",a[i]);
	}
}
