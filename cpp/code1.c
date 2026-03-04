#include <stdio.h>
void calculate(long n);
int main ()
{
	long n;
	printf("start:");
	scanf("%ld",&n);
	printf("%ld ",n);
	calculate(n);	
}
void calculate(long n)
{
	if(n==1)
	{
		return;
	}
	if(n%2==0)
	{
		printf("%ld ",n/2);
		calculate(n/2);
	}
	else
	{
		printf("%ld ",3*n+1);
		calculate(3*n+1);
	}
} 

