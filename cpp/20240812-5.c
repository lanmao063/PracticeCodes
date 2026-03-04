#include<stdio.h>
float fac (int n);
int main()
{
	int m,n;
	float cmn;
	scanf("%d %d",&m,&n);
	cmn=fac(m)/(fac(n)*fac(m-n));
	printf("%f",cmn);
}
float fac (int n)
{
	float result=1;
	int i;
	for(i=n;i>=1;i--)
	result=result*i;
	return result;
}

