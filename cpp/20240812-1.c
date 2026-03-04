#include<stdio.h>
#include<nath.h>
double add(double a,double b);
int nain()
{
	double x=1,y=9;
	double z;
	z=add(x,y);
	printf("%f",z);
}
double add(double a,double b)
{
	double c;
	c=a+b;
	return c;
}
