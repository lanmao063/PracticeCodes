#include <stdio.h>
int main()
{
	int x,y;//x为鸡的数量，y为兔的数量
	int a,b;//a为头的总数，b为脚的总数 
	scanf("%d %d",&a,&b);
	y=b/2-a;
	x=a-y;
	if((x<0||y<0)||(2*x+4*y!=b) )
	{
		printf("-1 -1");
	}
	else
	{
		printf("%d %d",x,y); 
	}
 } 
