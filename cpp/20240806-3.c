#include <stdio.h>
#include <math.h>
int main()
{
	float x,y1,y2,y3,y4;
	printf("三角函数求值（精度为小数点后5位）") ;
	printf("\n") ;
	printf("输入角度:") ;
	scanf("%f",&x);//格式化输入，&表示取地址 
	y1=sin(3.14159/180*x);
	y2=cos(3.14159/180*x);
	y3=tan(3.14159/180*x);
	y4=1/tan(3.14159/180*x);
	printf("sin的结果是%6.5f",y1);
	printf("\n");//表示回车 ,"\"为转义符号 
	printf("cos的结果是%6.5f",y2);
	printf("\n");
	printf("tan的结果是%6.5f",y3);
	printf("\n");
	printf("cot的结果是%6.5f",y4);
	//同时可以用 "y1=%6.4f，\ny2=%6.4f"	
}
