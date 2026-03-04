#include <stdio.h>
int f(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
}
int f(int n)
{
	if(n>0)
	{
		return (n%10)+f(n/10);
	}
	else
	{
		return 0;
	}
}
