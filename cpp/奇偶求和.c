#include <stdio.h>
int main()
{
	unsigned int a;
	int m=0,n=0;
	scanf("%u",&a);
	while(a!=-1)
	{
		if(a%2==0)
			m+=a;
		else
			n+=a;
		a=0;
		scanf("%u",&a);	
	}
	printf("%d %d",n,m);
}

