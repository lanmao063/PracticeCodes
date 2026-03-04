#include <stdio.h>
void draw(int n);
int main()
{
	int n;
	scanf("%d",&n);
	draw(n);
}
void draw(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
