#include <stdio.h>
int main()
{
	int a,b,c,i=0;
	scanf("%d %d %d",&a,&b,&c);
	if(c<b)
	{
		i=c;c=b;b=i;
	} 
	if(b<a)
	{
		i=b;b=a;a=i;
	}
	if(c<b)
	{
		i=c;c=b;b=i;
	} 
	printf("%d %d %d",a,b,c);
}
