#include <stdio.h>
#include <math.h>
float f(float x);
int main()
{
	float x;
	scanf("%f",&x);
	printf("%f",f(x));
}
float f(float x) 
{
	if(x>=0)
	{
		return pow(x,0.5);
	}
	else
	{
		return pow(x+1,2)+2*x+1/x;
	} 
}
 
