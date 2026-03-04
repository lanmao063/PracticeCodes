#include <stdio.h>
int main()
{
	float x,y;
	scanf("%f",&x);
	if(x<0)
		if(x<-10)
			y=x*2;
		else
			y=x+2;
	else
		if(x>10)
			y=x/10;
		else
			y=x-2;
	printf("%f",y);						
			
}
