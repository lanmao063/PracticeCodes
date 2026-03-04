#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main() 
{
	int random_number;
	int m,n;	
	srand(time(NULL));  // 初始化随机数生成器
	for(int i=1;i<100000;i++)
	{
		random_number = rand() % 100;  // 生成 0 到 99 之间的随机数
			if(random_number<50)
		{
			//printf("抽到的是R级角色\n");
			m++	;
		}
		else
		{
			//printf("抽到的是SSR级角色\n");
			n++ ;	
		}
	}
	printf("%d,%d",m,n);
}
