#include <stdio.h>
int main()
{
	float a[10];
	float sum,ave;
	for(int i=0;i<3;i++)
	{
		scanf("%f",&a[i]);
		sum+=a[i];	
	}
	ave=sum/3;
	for(int i=0;i<3;i++)
	{
		if(a[i]>ave)
		{
			printf("%.0f ",a[i]);
		}
	}
}
