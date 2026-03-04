#include <stdio.h>
#include <math.h>
int main()
{
	int temp;
	scanf("%d",&temp);
	int i=5;
	for(;i>=0;i--)
	{
		int judge=temp/pow(10,i);
		if(judge!=0)
		{
			printf("%d\n",i+1);
			break;
		}
	}
	int a[5];
	int counter=0;
	for(int j=i;j>=0;j--)
	{
		a[counter]=temp/pow(10,j);
		printf("%d ",a[counter]);
		temp-=a[counter]*pow(10,j);
		counter++;
	}
	printf("\n");
	int sum=0;
	for(int m=i+1;m>=0;m--)
	{
		sum+=a[counter]*pow(10,m);
		counter--;
	}
	printf("%d",sum);
}
