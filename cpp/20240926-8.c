#include<stdio.h>
#define RATE =0.05
int main()
{
	int x;
	printf("请输入有几盏灯（几个人）：");
	scanf("%d",&x);
	int a[x];
	int k=0,m=0;
	for(int i=0;i<x;i++)
		a[i]=i+1; 	
	for(int t=1;t<x;t++)	
	{
		for(int j=2;j<x+1;j++)
		{
			if(j%a[t]==0)
			{
				a[t]=a[t]*(-1);
			}
		}
	}
	for(k=0;k<x;k++)
	{
		if(a[k]>0)
		{
			m++;
		}
	}
	printf("最后亮着的灯有%d盏",m);	
 } 
