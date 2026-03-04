#include <stdio.h>
void iPlus();
int main()
{
	auto int i=1;//auto自动变量，定义后，函数使用完毕会被释放掉 
	i++;
	printf("%d",i);
	iPlus();
	iPlus();
	iPlus();
	iPlus();
	iPlus();
} 
void iPlus()
{
	static int x=0;//static静态变量，函数结束后不被释放，主函数结束后被释放 
	x++; 
	int y=0;
	y++;
	printf("%d %d",x,y); 
	
 } 
