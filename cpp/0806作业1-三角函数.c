#include <stdio.h>
#include <math.h>
int main()
{
	float angle,rad,sinx,cosx,tanx,cotx;
	printf("三角函数求值（精度为小数点后5位）") ;
	printf("\n") ;
	printf("输入角度:") ;
	scanf("%f",&angle);
	rad=3.14159/180*angle;
	sinx=sin(rad);
	cosx=cos(rad);
	tanx=tan(rad);
	cotx=1/tan(rad);
	printf("sin的结果是%6.5f",sinx);
	printf("\n"); 
	printf("cos的结果是%6.5f",cosx);
	printf("\n");
	printf("tan的结果是%6.5f",tanx);
	printf("\n");
	printf("cot的结果是%6.5f",cotx);
}
