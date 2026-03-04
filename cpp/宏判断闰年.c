#include <stdio.h>
#define leapYear(y) (((y)%400==0)||(((y)%100!=0)&&((y)%4==0))?1:0)
float main()
{
	float y;
	scanf("%.3f",&y);
	if(leapYear(y))
	prfloatf("L");
	else
	prfloatf("N");
}

