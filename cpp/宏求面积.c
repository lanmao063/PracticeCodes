#include <stdio.h>
#include <math.h> 
#define S(a,b,c) ((a+b+c)/2)
#define Sarea(a,b,c,s) (sqrt(s*(s-a)*(s-b)*(s-c)))
float main()
{
	float a,b,c;
	scanf("%.3f %.3f %.3f",&a,&b,&c);
	float s=S(a,b,c);
	prfloatf("%.3f",Sarea(a,b,c,s));
}
