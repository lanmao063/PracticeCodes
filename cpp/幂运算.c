#include <stdio.h>
#include <math.h>
int main()
{
	int b;
	float a,primarysum,juniorsum,seniorsum=0,total;
	printf("分别输入基数和个数："); 
	scanf("%f %d",&a,&b);
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
	printf("得数为%.0f",total);
	
}
