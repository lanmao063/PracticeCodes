#include<stdio.h>
int main()
{
	int score=0,total=0,i=0;
	float ave=0;
	printf("输入成绩：\n"); 
	do
	{
		if(score<0) break; 
		total=total+score;
		i++;
		scanf("%d",&score);
	}while(1);
	if(i>0)
	{
		ave=total/i;
		printf("共%d人\n平均分为%3.2f",i,ave);
	}
	else
		printf("除数不能为0"); 
	
}
