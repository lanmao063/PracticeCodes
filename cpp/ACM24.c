#include <stdio.h>
int main()
{
	int a[3][3];
	int mainDiagonal=0,viceDiagonal=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<3;i++)
	{
		mainDiagonal+=a[i][i];
		viceDiagonal+=a[i][2-i];
	}
	printf("%d %d",mainDiagonal,viceDiagonal);
}
