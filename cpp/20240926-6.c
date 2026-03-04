#include <stdio.h>
int main()
{
	long double P=0;
	int n=1;
	for(int i=1;i<5;i++)
	{
		long double mi=1;
		int j=i;
		for(;j<=n;j--)
		{			
			mi=0.75*mi;
		}
		P=P+mi;
	}
	printf("%ld",0.25*P-1);
	
}
