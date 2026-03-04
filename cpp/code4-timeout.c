#include <stdio.h>
#include <math.h>
int calculateresult(int i);
int calculatepossible(int a,int b,int n);
int main()
{
	int n,result,possible;
	//printf("输入棋盘最大的长度：");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		//printf("当棋盘长度为%d时:\n",i);
		possible=0;
		for(int a=1;a<=i;a++)
		{
			for(int b=1;b<=i;b++)
			{
				//printf("knight position is (%d,%d)\n",a,b);
				//printf("possible is %d\n",calculatepossible(a,b,i));
				possible=possible+calculatepossible(a,b,i);
			}
		}
		result=calculateresult(i)-possible/2;
		//printf("possible is %d\n",possible);
		//printf("total possibilities is %d\n",result);
		printf("%d\n",result);
	}
}
int calculateresult(int i)
{
	return pow(i,2)*(pow(i,2)-1)/2;
} 
int calculatepossible(int a,int b,int n)
{
	int possible=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if((abs(i-a)==2 && abs(j-b)==1)||(abs(i-a)==1 && abs(j-b)==2))
			{
				possible++;
			}
		}
	}
	return possible;
}
