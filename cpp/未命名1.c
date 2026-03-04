#include<stdio.h>
int main()
{
    float c;
    float a,b,i=1,d,sum=0;
	scanf("%f %f",&a,&b);
	d=b-a+1;
    for(;i<=d;i++)
	{sum+=a;
	a++;}
	c=sum/d;
    printf("%.2f",c);
    return 0;
}
