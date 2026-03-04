#include<stdio.h>
int main()
{
	char rank;
	printf("请输入分数等级:"); 
	scanf("%c",&rank);
	switch(rank)
	{
		case'A':
		case'B':
		case'C':
		case'D':
			printf("合格");
			break; 
		case'E':
			printf("不合格");
			//break; 
	}
}
