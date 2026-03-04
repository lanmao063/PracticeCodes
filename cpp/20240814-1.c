#include <stdio.h>
int main()
{
	int a[10]={516,984,423,543,514,548,614,312,845,541};
	int t;
	for(int i=0;i<9;i++)
	{
	 	for(int j=i+1;j<10;j++)
	 	{
	 		if(a[j]>a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;	
			}	
		}
	}
	for(int i=0;i<10;i++)
		printf("%d ",a[i]);		
} 
