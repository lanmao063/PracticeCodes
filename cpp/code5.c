#include <stdio.h>
int main()
{
	int n,temp;
	scanf("%d",&n);
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		a[i]=0;
	}
	for(int i=0;i<n-1;i++)
	{
		scanf("%d",&temp);
		a[temp]=1;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0)
		{
			printf("%d",i);
			break;
		}
	}
 } 
