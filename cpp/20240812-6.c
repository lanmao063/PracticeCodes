#include<stdio.h>
float fac (int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%f",fac(n));
}
float fac (int n)
{
	if(n==0)
		return 1;
	else
		return n*fac(n-1);
}

