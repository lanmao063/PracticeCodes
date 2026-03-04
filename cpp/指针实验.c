#include <stdio.h>
int add;
int plus;
void mathOperation(int a,int b);
int main()
{
	int a,b ;
	printf("输入两个数：");
	scanf("%d %d",&a,&b);
	mathOperation(a,b);
	printf("%d,%d",add,plus);
} 
void mathOperation(int a,int b)
{
	add=(a+b);
	plus=(a*b); 
}
