#include <stdio.h>
#include <math.h>
int main()
{
	float x,y1,y2;
	printf("输入角度") ;
	scanf("%f",&x);//格式化输入
	//"&"表示取地址，保存到x中 
	y1=3*sin(3.14159/180*x);
	y2=2*cos(3.14159/180*x);
	printf("y1=%6.4f,y2=%6.4f",y1,y2);//格式化输出 
	//“6.4”表示整数部分6位，小数部分4位 
	
}
