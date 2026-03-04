#include <stdio.h>
int main()
{
	int i=11;
	int *p=&i;
	int *q=p;
	*q++;
	
	printf("%d",q);
	printf("\n%d",*q);
}
