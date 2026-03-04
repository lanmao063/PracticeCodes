#include <stdio.h>
int main()
{
	int a=100;
	int *p;
	int **pp;
	p=&a;
	*p=200;
	pp=&p;
	printf("%d",*pp);
	printf("%d",**pp);
	printf("%d",a);
}
