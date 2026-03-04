#include <stdio.h>
int isfactorPlus(int i);
void print(int i);
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
		if(i==isfactorPlus(i))
		{
			print(i);
		}
	}
}
int isfactorPlus(int i)
{
	int sum=0;
	for(int j=1;j<i;j++)
	{
		if(i%j==0)
		{
			sum+=j;
		}
	}
	return sum;
}
void print(int i)
{
	printf("%d its factors are ",i);
	for(int j=1;j<i;j++)
	{
		if(i%j==0)
		{
			printf("%d ",j);
		}
	}
	printf("\n");
}

