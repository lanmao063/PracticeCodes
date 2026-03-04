#include <stdio.h>
int f(int x);
int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",f(x));
} 
int f(int x)
{
	if(x<1)
	{
		return x;
	}
	else if(x<10)
	{
		return 2*x-1;
	}
	else
	{
		return 3*x-11;
	}
}
