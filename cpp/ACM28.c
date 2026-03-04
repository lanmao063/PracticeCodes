#include <stdio.h>
#include <math.h>
void isPrime(int n);
int main()
{
	int n;
	scanf("%d",&n);
	isPrime(n);
} 
void isPrime(int n)
{
	int flag=1;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag=0;
		}
	}
	if(flag)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}
