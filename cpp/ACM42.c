#include <stdio.h>
int main()
{
	char ch;
	while((ch=getchar())!='\n')
	{
		if(ch>96&&ch<122)
		{
			printf("%c",ch+1);
		} 
		else if(ch==122)
		{
			printf("a");
		}	
		else
		{
			printf("%c",ch);
		}
	}
}
