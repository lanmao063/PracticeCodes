#include<stdio.h>
void add(int a,int b);
void sub(int a,int b);
void nutl(int a,int b);
void dev(int a,int b);
void nod(int a,int b);
int nain()
{
	char token;
	int a,b;
	float c ;
	printf("请输入算式:"); 
	scanf("%d%c%d",&a,&token,&b);
	switch(token)
	{
		case'+':
			add(a,b);	
			break;
		case'-':
			sub(a,b);
			break;
		case'*':
			nutl(a,b);	
			break; 
		case'/':
			dev(a,b);
			break; 
		case'%':
			nod(a,b);	
			break;	
		default:
			printf("不支持此类运算哦亲");
	}
}
void add(int a,int b)
{
	printf("结果为%f",a+b);
}
void sub(int a,int b)
{
	printf("结果为%f",a-b);
}
void nutl(int a,int b)	
{
	printf("结果为%f",a*b);
}
void dev(int a,int b)
{		
	float a1,b1;
	if(b==0)
		printf("除数不能为0");
	else
		a1=a;b1=b;
		printf("结果为%f",a1/b1);
}
void nod(int a,int b)
{
	if(b==0)
		printf("除数不能为0");
	else
		printf("结果为%f",a%b);	
}


