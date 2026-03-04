#include <stdio.h>
int main()
{
	int i,n;
	printf("输入数字:") ;
	scanf("%d",&n);
	if(n==0)
		printf("除数不能为0");
	else 
	{
		printf("\n能被%d整除的数有：",n) ;
		for(i=1;i<=100;i++)
		{
			if((i%n)==0)
				printf("%d ",i);
		}
	}
}
