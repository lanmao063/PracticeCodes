#include <stdio.h>
int main()
{
	int i,j,s;
	for(i=1;i<=9;i++)
		{
		for(j=1;j<=i;j++)
			{
			s=i*j;	
				printf("%d¡Á%d=%d ",i,j,s);
			}
			printf("\n");
		}
}
