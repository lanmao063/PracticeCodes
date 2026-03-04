#include <stdio.h>
int main()
{
char c; 
printf("输入小写英文字母：");
scanf("%c",&c); //以字符形式接收信号
c=c-32 ;
printf("\n转换后为: %c",c);
	
}
