#include<stdio.h>
int main()
{
	int year,age,i; 
	
	for(i=1;i<=10;i++)	
	{
		printf("输入出生年份:"); 
		scanf("%d",&year);
		if(year==0)
		{
			printf("程序结束"); 
			break;
		}
		age=2024-year;
		if(age>=18)
		{
			printf("今年%d岁，成年\n",age);
		}
		else
		{
			if(age>=0)
			{
				printf("今年%d岁，未成年\n",age) ;
			}
			else
			{
				printf("?") ;
			}
				
		}
			
	}

 } 
