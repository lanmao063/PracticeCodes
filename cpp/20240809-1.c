#include<stdio.h>
int main()
{
	char rank;
	printf("请输入分数等级:"); 
	scanf("%c",&rank);
	switch(rank)
	{
		case'A':
			printf("90~100");
			break;
		case'B':
			printf("80~89");
			break;
		case'C':
			printf("70~79");
			break;
		case'D':
			printf("60~69");
			break;
		case'E':
			printf("0~59");
			break;
		default:
			printf("输入错误");
		
	}
 } 
