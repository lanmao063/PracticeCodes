#define M 10 //宏，宏定义，某个符号是某个取值；一般用大写字母 ;方便管理常用数值或公式
#define ADD(a,b) a+b 
#include <stdio.h>
int main()
{
	float PI=3.14159; 
	int a[40];//一维数组
	int b[M][M];//二维数组
	int c[M][M][M];//三维数组
	float sqrt;
	sqrt=PI*3*3 ;
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<M;j++)
		{
			b[i][j]=M*i+j+1;
			printf("%d\t",b[i][j]);
		}
		printf("\n");	
	}
}

