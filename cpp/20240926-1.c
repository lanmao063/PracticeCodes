#include <stdio.h>
#include <math.h>
int main()
{
	int S=72467;
	int len=sqrt(S);
	int wid=sqrt(S);
	int i=1,j=1;
	do
	{
		len=len/2;
		i=i*2;
	}while(len>=103);
	do
	{
		wid=wid/2;
		j=j*2;
	}while(wid>=1);
	i=i/2;
	j=j/2;
	printf("%d",i*j);
 } 
