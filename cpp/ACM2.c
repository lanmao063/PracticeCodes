#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int tempMax=a;
	if(b>tempMax)
	{
		tempMax=b;
	}
	if(c>tempMax)
	{
		tempMax=c;
	}
	printf("%d",tempMax);
}
