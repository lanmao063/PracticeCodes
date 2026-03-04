#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int sumPlus(int a[][3],int n);
int sumMinus(int a[][3],int n);
int main()
{
	int flag;//判断是否再次计算
	do
	{
		int n;//n阶行列式 
		printf("输入行列式阶数:");
		scanf("%d",&n);
		int a[3][3];
		printf("按a11->a1n,a21->a2n,……,an1->ann的顺序输入行列式，一行输入一个元素:\n"); 
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf(" %d",&a[i][j]);
			}
		}
		int sum1=sumPlus(a,n);
		int sum2=sumMinus(a,n);
		system("cls");
		printf("该行列式结果为%d，",sum1-sum2);
	    printf("是否继续计算？\n0:否\n1:是\n");
	    scanf("%d",&flag); 
	    if(flag==1)
	    {
	    	system("cls");
	    	for (int i = 0; i < 3; i++) 
			{
    			for (int j = 0; j < 3; j++) 
				{
        			a[i][j] = 0;
   				}
			}
		}
		else
		{
			break;
		}
	}while(flag);
	system("cls"); 
	printf("感谢使用，程序将在3秒内关闭");
	Sleep(3000);
}
int sumPlus(int a[][3],int n)
{
	int subsum=1;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int q=i;
		for(int p=0;p<n;p++,q++)
		{
			if(q==n)
			{
				q-=n;
			}
			subsum*=a[p][q];
		}
		sum+=subsum;
		subsum=1;
	}
	return sum;
}
int sumMinus(int a[][3],int n)
{
	int subsum=1;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int q=n-1-i;
		for(int p=0;p<n;p++,q--)
		{
			if(q<0)
			{
				q+=n;
			}
			subsum*=a[p][q];
		}
		sum+=subsum;
		subsum=1;
		i=0;	
	}
	return sum;
}
