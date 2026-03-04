#include <stdio.h>
#include <string.h>
void Reverse(char *a,char *b,int length);
int main()
{
	char a[10000];
	scanf("%s",a);
	int length=strlen(a);
	char b[length];
	Reverse(a,b,length);
	for(int i=0;i<length;i++)
	{
		printf("%c",b[i]);
	}
}
void Reverse(char *a,char *b,int length)
{
	for(int i=0;i<length;i++)
	{
		b[i]=a[length-1-i];
	}
}
