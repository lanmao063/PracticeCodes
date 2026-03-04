#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *fp;
	char buffer[1000];//定义缓冲区，假设每行文字不多于1000字 
	if((fp=fopen("C:\\Users\\asus\\Desktop\\datafile.txt","r"))==NULL)
	{
		printf("文件不能打开\n");
		exit(1);
	}
	while(!feof(fp))
	{
		if(fgets(buffer,1000,fp)!=NULL)
		printf("%s",buffer);
	}
	while(strlen(fgets(buffer,1000,stdin))>0)
	{
		buffer[strcspn(buffer,"\n")]='\0';//去掉自带的符号\n，否则即使没有输入也会判定有一个字符，无法break 
		if(strcspn(buffer,"exit")==0)
		break;
		fputs(buffer,fp);
		fputs("\n",fp);
	} 
	fclose(fp);	
}
