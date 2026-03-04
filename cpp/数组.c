#include <stdio.h>
int main()
{
	int temp[12];
	int sum=0;
	for(int i=0;i<12;i++)
	{
		scanf("%d",&temp[i]);
	}
	for(int j=0;j<12;j++)
	{
		sum+=temp[j];
	}
	printf("%d",sum);
} 
