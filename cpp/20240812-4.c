#include<stdio.h>

int main()
{
	float a;
	int n;
	float x;
	float power(float a,int n);
	scanf("%f %d",&a,&n);
	x=power(a,n);
	printf("%f",x);
	
}
float power(float a,int n)
{
int i;
float t=1;
for(i=1;i<=n;i++)
{
	t=t*a;
}
return t;
}
