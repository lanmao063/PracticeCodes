#include <stdio.h>
#include <math.h>
void greater(float a,float b,float delta);
void equals(float a,float b,float delta);
void smaller(float a,float b,float delta);
int main() 
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	float delta=b*b-4*a*c;
	if(delta>0)
	{
		greater(a,b,delta);
	}
	else if(delta==0)
	{
		equals(a,b,delta);
	}
	else
	{
		smaller(a,b,delta);
	}
}
void greater(float a,float b,float delta)
{
	float x1,x2;
	x1=(-b+sqrt(delta))/2*a;
	x2=(-b-sqrt(delta))/2*a;
	printf("x1=%.3f x2=%.3f",x1,x2);
}
void equals(float a,float b,float delta)
{
	float x1;
	x1=(-b+sqrt(delta))/2*a;
	printf("x1=%.3f x2=%.3f",x1,x1);
}
void smaller(float a,float b,float delta)
{
	float real,imaginary;
	real=(-b/(2*a));
	imaginary=sqrt(-delta)/(2*a);
	printf("x1=%.3f+%.3fi x2=%.3f-%.3fi",real,imaginary,real,imaginary);
}
