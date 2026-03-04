#include <stdio.h>
#include <math.h>
int is(int x);
int f(int m,int n);
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d",f(m,n));
}
int f(int m,int n)
{
	int sum=0;
	for(int i=m;i<=n;i++)
	{
		if(is(i))
		{
			sum+=i;
		}
	}
	return sum;
}
int is(int x)
{
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			return 0;
		}

	}	
	return 1;
}

