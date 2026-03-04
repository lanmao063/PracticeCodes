#include <stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int n,low,mid,high,flag,found;
	low=0;high=9;found=0;
	scanf("%d",&n);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(n==a[mid])
		{
			flag=1;
			break;
		}
		else
			if(n>a[mid])
			{
				low=mid+1;
			}
			else
				high=mid-1;
	}
	if(flag==1)
		printf("%d",mid+1);
	else
		printf("?");
 } 
