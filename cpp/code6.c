#include <stdio.h>
int main()
{
	int n;
	long long times=0,remain;
	//printf("input the quantity of the group:");
	scanf("%d",&n);
	long long a[n]; 
	//printf("input the group:");
	for(int i=0;i<=n-1;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(int i=1;i<=n-1;i++)
	{
		if(a[i]<a[i-1])
		{
			remain=a[i-1]-a[i];
			a[i]=a[i-1];
			times=times+remain;
		}
	}
	printf("%lld",times);
	
}
