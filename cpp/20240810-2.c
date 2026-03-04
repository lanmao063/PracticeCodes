#include <stdio.h>
int main()
{
	int n,i;//iÎª¼ÆÊıÆ÷ 
	long fac;
	scanf("%d",&n);
	fac=1;
	for(i=1;i<=n;i++)
		fac=fac*i;
	printf("%d!=%ld",n,fac);
		
	
}
