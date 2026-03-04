#include<stdio.h>
float add(int a,int b);
float neg(int a,int b);
float nutl(int a,int b);
float quat(float a,float b);
float ren(int a,int b);
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
			c=add(a,b);
			printf("结果为%f",c);
		break;
		case'-':
			c=neg(a,b);
			printf("结果为%f",c);
		break;
		case'*':
			c=nutl(a,b);
			printf("结果为%f",c);
		break; 
		case'/':
			if(b==0)
				printf("除数不能为0");
			else
				{
				a1=a;
				b1=b; 
				c=quat(a1,b1);
				printf("结果为%f",c);
				}
		break; 
		case'%':
			if(b==0)
				printf("除数不能为0");
			else
				{
				c=ren(a,b);
				printf("结果为%f",c);
				}
		break;
		default:
			printf("不支持此类运算哦亲");
	}
}
float add(int a,int b)
{
	float c;
	c=a+b;
	return c;
}
float neg(int a,int b)
{
	float c;
	c=a-b;
	return c;
}
float nutl(int a,int b)
{
	float c;
	c=a*b;
	return c;
}
float quat(float a,float b)
{
	float c;
	c=a/b;
	return c;
}
float ren(int a,int b)
{
	float c;
	c=a%b;
	return c;
}

