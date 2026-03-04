#include <stdio.h>
int main()
{
	char s[]={'a','b','c','d'};
	char ss[]={"asdfghjkl"};//存储形式为asdfghjkl\0,字符串 
	char sss[]={"姚鸡"} ;//需要5个字节 
	int i;
	for(i=0;i<4;i++)
	{	
		printf("%c",sss[i]);	
	}
	printf("%s",ss);//s含义为字符串	
	puts(ss);//输出字符串函数 
	puts(sss); 
	puts("三个+");
} 
