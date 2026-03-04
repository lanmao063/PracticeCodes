#include <stdio.h>
int main()
{
	char s[15];
	//scanf("%s",s);//不用加取地址符；；回车和空格都是确认的意思 
	gets(s);//只通过回车确认 
	puts(s); 
	
}
