#include <stdio.h>
char sign(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%c",sign(n));	
}
char sign(int n)
{
	if(n>0)
	{
		return '+';
	}
	else if(n==0)
	{
		return '=';
	}
	else
	{
		return '-';
	}
}
