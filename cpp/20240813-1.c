#include <stdio.h>
#include <math.h>
int a=20;//全局变量 ,定义域：全局，作用域：子程序  
//?auto int d;//自动变量，auto可省略
//?static int e;//静态变量， 
//register int i;//寄存器变量:空间小，速度快 ;仅能用于局部变量，整形 
int main()
{
	int a=10;//局部变量 ，对全局重名变量有屏蔽作用 
	int i=600000000;
	void add();
	void count(int n);
	printf("%d",a);
	add();	
	count(i);
} 
void add()
{
	int b=20;
	printf("%d",a+b);
} 
void count(int n)
{
	int s;
	register int i=0;
	for(i=0;i<n;i++)
	{
		i=i+1;
		i=i+1;
		i=i+1;
		i=i+1;
		i=i+1;
		i=i+1;
		i=i+1;
		i=i+1;
		i=i+1;
		i=i+1;
		i=i+1;
		s=sqrt(i);
	}	
	printf("%d",s);
}
