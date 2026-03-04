#include <stdio.h>
int *addp(int *x,int *y);
int main()
{
	int a=10,b=10;
	int c;
	int *d;	
	//c=add(a,b);
	d=addp(&a,&b);
	printf("%d",*d);
	printf("\n%d %d",a,b);
	
}
int *addp(int *x,int *y)//´«Ö· 
{
	int *p;
	p=x;
	*x=*x+*y;
	return p;
}
