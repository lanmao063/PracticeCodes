#include <stdio.h>
#include <math.h>
void rowstart(long row,long coloum,long long *result);
void coloumstart(long row,long coloum,long long *result);
int main()
{
	int n,m;
	long row,coloum;
//	printf("输入次数：");
	scanf("%d",&n);
	m=n;
	long long result[n];
	while(n>0)
	{
//		printf("分别输入行数和列数：");
		scanf("%ld %ld",&row,&coloum);
		if(row>=coloum)
		{
			rowstart(row,coloum,&result[n-1]);
		}
		else
		{
			coloumstart(row,coloum,&result[n-1]);
		}
		n--;
	}
	for(int i=m-1;i>=0;i--)
	{
		printf("%lld\n",result[i]);
	}
}
void rowstart(long row,long coloum,long long *result)
{
	if(row%2==0)
	{
		*result=row*row-coloum+1;
	}
	else
	{
		*result=(row-1)*(row-1)+coloum;
	}
	//printf("结果是%lld",result);
}
void coloumstart(long row,long coloum,long long *result)
{
	if(coloum%2!=0)
	{
		*result=coloum*coloum-row+1;
	}
	else
	{
		*result=(coloum-1)*(coloum-1)+row;
	}
	//printf("结果是%lld",result);
}
