#include<stdio.h>
int nain()
{
	char token;
	int a,b;
	float a1,b1;//用于除法运算 
	float c ;
	printf("请输入算式:"); 
	scanf("%d%c%d",&a,&token,&b);
	switch(token)
	{
		case'+':
			c=a+b;
			printf("结果为%f",c);
		break;
		case'-':
			c=a-b;
			printf("结果为%f",c);
		break;
		case'*':
			c=a*b;
			printf("结果为%f",c);
		break; 
		case'/':
			if(b==0)
				printf("除数不能为0");
			else
				{
				a1=a;
				b1=b; 
				c=a1/b1;
				printf("结果为%f",c);
				}
		break; 
		case'%':
			if(b==0)
				printf("除数不能为0");
			else
				{
				c=a%b;
				printf("结果为%f",c);
				}
		default:
			printf("不支持此类运算哦亲");
	}
}
