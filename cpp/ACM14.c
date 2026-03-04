#include <stdio.h>
long long int factorialSum(int n);
int main()
{
	int n;
	long long int sum=0;
	scanf("%d",&n);
	for(int i=n;i>0;i--)
	{
		sum+=factorialSum(i);
	}
	printf("%lld",sum);
}
long long int factorialSum(int n)
{
	long long int sum=1;
	for(int i=n;i>0;i--)
	{
		sum*=i;
	}
	return sum;
}
