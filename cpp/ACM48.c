#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char a[n];
	for(int i=0;i<n;i++)
	{
		scanf(" %c",&a[i]);
	}
	int starter;
	scanf("%d",&starter);
	char b[n-starter+1];
	int j=0;
	for(int i=0;i<n-starter+1;i++)
	{
		b[i]=a[starter-1+j];
		j++;
		printf("%c",b[i]);
	}
	
} 
