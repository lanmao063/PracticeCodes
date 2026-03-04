#include <stdio.h>
void exchange (int *a,int *temp,int n,int m);
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int m;
	scanf("%d",&m);
	int temp[m];
	exchange(a,temp,n,m);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
} 
void exchange (int *a,int *temp,int n,int m)
{
	int j=0;
	for(int i=n-m;i<n;i++)
	{
		temp[j]=a[i];
		
		j++;
	}
	for(int i=n-m-1;i>=0;i--)
	{
		a[i+m]=a[i];
	}
	for(int i=0;i<m;i++)
	{
		a[i]=temp[i];
	}
}
