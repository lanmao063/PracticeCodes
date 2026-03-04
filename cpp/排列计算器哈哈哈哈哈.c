#include <stdio.h>
int i=1;
float fac(int x,int y);
int main()
{
	int m,n;
	float w;
	printf("排列计算器\n输入集合内元素数量m及选取的元素数量n:");
	scanf("%d %d",&m,&n);
	w=fac(m,n);
	printf("A%d%d=%6.2f",m,n,w);	
} 
float fac(int x,int y)
{  
	float z;
	if(i>y)
		z=1;
	else
	{
		i++;
		z=x* fac(x-1,y);
	}
	return z;	
}
