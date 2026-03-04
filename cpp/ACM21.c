#include <stdio.h>
#include <math.h>
int main()
{
	int x;
	scanf("%d",&x);
	int temp=sqrt(x);
	float temp1=temp,temp2;
	while(1)
	{
		temp2=0.5*(temp1+x/temp1);
		if(temp2-temp1<0.00001)
		{
			break;
		}
		else
		{
			temp1=temp2;
		}
	}
	printf("%.3f",temp2);
} 
