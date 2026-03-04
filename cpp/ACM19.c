#include <stdio.h>
#include <math.h>
int main()
{
	int height;
	scanf("%d",&height);
	int n;
	scanf("%d",&n);
	printf("%.2f ",(float)height*pow(0.5,n));
	float totalHeight=height;
	for(int i=1;i<n;i++)
	{
		totalHeight+=2*height*pow(0.5,i);
	} 
	printf("%.2f",totalHeight);
	
}
