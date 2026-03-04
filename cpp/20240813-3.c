#include <stdio.h>
int main()
{
	int a[10]={213,223,233,243,352,263,283,273,293,560};
	int max,min,maxIndex,minIndex;//后续词开头大写 
	max=a[0];
	min=a[0];
	for(int i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			maxIndex=i;
		}
		if(a[i]<min)
		{
			min=a[i];
			minIndex=i;
		}
	}
	
	 printf("%d %d %d %d",max,min,maxIndex,minIndex);
}
