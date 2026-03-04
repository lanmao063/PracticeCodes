#include <string.h>
#include <stdio.h>
int main()
{
	char s1[10]={" yaoji"};
	char s2[10]={"xuan"};
	int ret=0;
//	char s3[10]={'y','a','o','j','i'};
//	strcpy(s1,s3);//字符串复制函数,将s2复制到s1中	
//	puts(s1) ;
//	for(int i=0;i<10;i++)
//	{
//		s1[i]=s3[i];
//	}	
//	puts(s1) ;
//	ret=strcmp(s1,s2);//s1>s2 返还正整数；s1<s2 返还负整数；s1=s2 返还0	
//	printf("%d",ret); 
//	strcat(s1,s2);//将s2连接到s1后	
//	puts(s1);
	strlen(s1);//字符串长度识别函数 
	printf("%d",strlen(s1));	
	
} 
