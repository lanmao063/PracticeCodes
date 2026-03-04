#include <stdio.h>
#include <math.h>
int isPrime (int n);
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		if(isPrime(i))
		{
			printf("%d\n",i);
		}
	}
	
} 
int isPrime (int n)
{
	int flag=1;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag=0;
			return 0;
		}
	}
	if(flag)
	{
		return 1;
	}
	
}
