#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("datafile.txt","r"))==NULL)
	{
		printf("文件不能打开\n");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF)
		fputc(ch,stdout);
	fclose(fp);	
}
