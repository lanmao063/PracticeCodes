#include <stdio.h>
int main()
{
	int a[10]={516,984,423,543,514,548,614,312,845,541};
	int t,flag,time,total;
	for(int i=0;i<10;i++)
	{
		flag=0;
		total++;
		for(int j=0;j<10;j++)
		{
			if(a[j]<a[j-1])
			{
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
				flag=1;
				time++;
			}
		}
		if(flag==0)
		{
			break;
		}	
	}	
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n%d %d",time,total);
}
