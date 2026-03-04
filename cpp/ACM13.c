#include <stdio.h>
#include <math.h>
int main()
{
	int b;
	float a=2,primarysum,juniorsum,seniorsum=0,total;
	scanf("%d",&b);
	for(int i=1;i<=b;i++)//	总共加i次 
	{
		int j=b-i;
		juniorsum=0;
		while(j>=0)//计算每一次加的数是几 
		{
			primarysum=a*pow(10,j);
			juniorsum+=primarysum;
			j--; 
		}
		seniorsum+=juniorsum;//总和 
	}
	total=seniorsum;
	printf("%.0f",total);
	
}
