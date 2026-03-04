#include <stdio.h>
#include <math.h>
void aPlus (int a,float *sum);
void bPlus (int b,float *sum);
void cPlus (int c,float *sum);
int main()
{
	int a,b,c;
	float sum=0;
	scanf("%d %d %d",&a,&b,&c);
	aPlus(a,&sum);
	bPlus(b,&sum);
	cPlus(c,&sum);
	printf("%.2f",sum);
}
void aPlus (int a,float *sum)
{
	for(int i=a;i>0;i--)
	{
		(*sum)+=i;
	}
}
void bPlus (int b,float *sum)
{
	for(int i=b;i>0;i--)
	{
		(*sum)+=pow(i,2);
	}
}
void cPlus (int c,float *sum)
{
	for(float i=c;i>0;i--)
	{
		(*sum)+=1/i;
	}
}
