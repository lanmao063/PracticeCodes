#include <stdio.h>
#define MAX_OF_THREE(x, y, z) ((x) > (y) ? ((x) > (z) ? (x) : (z)) : ((y) > (z) ? (y) : (z)))
void MAX(float a,float b, float c);
int main() 
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    MAX(a,b,c);
    printf("%.3f",MAX_OF_THREE(a, b, c));
    return 0;
}
void MAX(float a,float b, float c)
{
	float max=a;
	if(b>max)
	{
		max=b;
	}
	if(c>max)
	{
		max=c;
	}
	printf("%.3f\n",max);
}
