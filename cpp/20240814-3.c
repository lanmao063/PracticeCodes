#include <stdio.h>
int main()
{
	int b,flag=0;
	printf("输入要查找的数据："); 
	scanf("%d",&b);
	int a[10]={516,984,423,543,514,548,614,312,845,541};
	for(int i=0;i<10;i++)
	{
		if(a[i]==b)
		{
			printf("%d在第%d位",b,i+1);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("没有这个数");
	}	
}
