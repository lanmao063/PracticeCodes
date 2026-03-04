#include <stdio.h>
int main()
{
	int x=0,i=0,j=0;
	int a[8]={322,865,118,77,42,413,98,84};
	int b[8]={496,276,149,466,85,98,735,518};
	for(i=0;i<8;i++)
		for(j=0;j<8;j++)
		{
			x=a[i]*b[j];
			if(x%7!=0)
				printf("%d,%d\n",i+1,j+1);
		}
 } 
