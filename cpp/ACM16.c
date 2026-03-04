#include <stdio.h>
#include <math.h>
int triblePlus(int n);
int main()
{
	for(int i=100;i<1000;i++)
	{
		if(i==triblePlus(i))
		{
			printf("%d\n",i);
		}
	}
}
int triblePlus(int n)
{
	int temp,sum=0;
	for(int i=2;i>=0;i--)
	{
		temp=n/pow(10,i);
		sum+=pow(temp,3);
		n-=temp*pow(10,i);
	} 
	return sum;
}
