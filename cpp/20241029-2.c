#include <stdio.h>
int C(int n,int m);
int p(int x);
int main()
{
	int m,n;
	scanf("%d %d",&n,&m);
	printf("%d",C(n,m));
}
int C(int n,int m)
{
	if(p(m)==0||p(n-m)==0)
	{
		return 1;
	}
	else
	{
		return p(n)/(p(m)*p(n-m));
	}
	
}
int p(int x)
{
	if(x==0)
	{
		return 0;
	}
	for(int i=x-1;i>0;i--)
	{
		x*=i;
	}
	return x;
}
