#include <stdio.h>
int peaches(int total,int day);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",peaches(1,n));
}
int peaches(int total,int day)
{
	if(day==1)
	{
		return total;
	}
	else
	{
		return peaches((total+1)*2,day-1);
	}
}
