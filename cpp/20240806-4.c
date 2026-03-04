#include <stdio.h>
int main()
{
	putchar(97);//向显示器输出一个字符 a
	putchar(97+1);//向显示器输出一个字符 b
	putchar('c');//向显示器输出一个字符 c
	putchar('a'+3);//向显示器输出一个字符 d
	int m=97,c,d,e;
	printf("%d\n",m);//十进制数 97
	printf("%c\n",m);//字符 a 
	printf("%f\n",m);//浮点数 0.000000(转换时混乱，在前面补全0导致） 
	printf("%x\n",m);//十六进制数 61
	printf("%X\n",m);//十六进制数（CAPS） 61
	scanf("%d %d %d",&c,&d,&e); 
	printf("%d %d %d",&c,&d,&e); 
}
