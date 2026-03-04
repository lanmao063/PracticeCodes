#include <stdio.h>
int main()
{
	int s,i;//iÎª¼ÆÊıÆ÷ 
	s=0;
	for(i=1;i<=100;s=s+i,i++);
	printf("s=%d\n",s);
}
