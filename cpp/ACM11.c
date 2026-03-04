#include <stdio.h>
int gcd(int tempA,int tempB,int min);
int lcm(int tempA,int tempB);
int i;
int main()
{
	int tempA,tempB;
	scanf("%d %d",&tempA,&tempB);
	int min;
	if(tempA>tempB)
	{
		min=tempB;
	}
	else
	{
		min=tempA;
	}
	printf("%d ",gcd(tempA,tempB,min));
	printf("%d",lcm(tempA,tempB));	
} 
int gcd(int tempA,int tempB,int min)
{
	for(i=min;i>0;i--)
	{
		if((tempA%i==0)&&(tempB%i==0))
		{
			return i;
			break;
		}
	}
}
int lcm(int tempA,int tempB)
{
	return tempA*tempB/i;
}
