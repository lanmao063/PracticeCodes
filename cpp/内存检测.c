#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int i=0; 
	while(p=(int*)malloc(100*1024*1024)) 
		i++;
	printf("%lf",i*100.0/1024.0);
	free(p);
	return 0;
 } 
