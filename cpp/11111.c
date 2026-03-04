#include <stdio.h>
int i=1;
float fec(int x,int y);
int main()
{
	int m,n,a=1;
	float w,s;
	scanf("%d %d",&m,&n);
	w=fec(m,n);
	s=fec(n,a);
	printf("%f",w/s);	
}
float fec(int x,int y);
	if(i==y)
	return 1;
	else
	return x*fec(x-1,y);
	
