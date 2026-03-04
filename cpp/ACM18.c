#include <stdio.h>
void assignmentA(int *a,int n);
void assignmentB(int *b,int n);
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	assignmentA(a,n);
	assignmentB(b,n);
	float sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=(float)a[i]/b[i];
	}
	printf("%.2f",sum);
} 
void assignmentA(int *a,int n)
{
	a[0]=2;
	a[1]=3;
	for(int i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
}
void assignmentB(int *b,int n)
{
	b[0]=1;
	b[1]=2;
	for(int i=2;i<n;i++)
	{
		b[i]=b[i-1]+b[i-2];
	}
}
