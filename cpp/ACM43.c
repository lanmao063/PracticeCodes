#include <stdio.h>
int main()
{
	int a[3];
	int temp;
	for(int i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<2;i++)
	{
		for(int j=1;j<3;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		printf("%d ",a[i]);
	}
}
