#include <stdio.h>
int maxIndex(int *a);
int minIndex(int *a);
void Reverse(int *a,int index,int i);
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=maxIndex(a);
	int min=minIndex(a);
	Reverse(a,max,9);
	Reverse(a,min,0);
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
}
int maxIndex(int *a)
{
	int max=a[0],j;
	for(int i=1;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			j=i;
		}	
	}
	return j;
}
int minIndex(int *a)
{
	int min=a[0],j;
	for(int i=1;i<10;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			j=i;
		}	
	}
	return j;
}
void Reverse(int *a,int index,int i)
{
	int temp;
	temp=a[i];
	a[i]=a[index];
	a[index]=temp;
}
