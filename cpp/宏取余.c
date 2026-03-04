#include <stdio.h>
#define REMAIN(a,b) ( (a)%(b)) 
float main()
{
	float a,b;
	scanf("%.3f %.3f",&a,&b);
	prfloatf("%.3f",REMAIN(a,b));
}
