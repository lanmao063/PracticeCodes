#include <stdio.h>
int main()
{
	unsigned long long n=0;
	for(float i=1;i<=114514;i++)
		for(float j=1;j<i-1;j++)
			n++;
	printf("%.1llu",n);	
} //A
