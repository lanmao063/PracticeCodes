#include <stdio.h>
int main()
{
	int score;
	printf("输入分数(0~100):");
	scanf("%d",&score);
	if(score>100 || score<0)
	printf("请重新输入"); 
	if(score>=90 && score<100)
	printf("等级为“优”"); 
	if(score>=80 && score<90)
	printf("等级为“良”");
	if(score>=70 && score<80)
	printf("等级为“中");
	if(score>=60 && score<70)
	printf("等级为“及格");   
	if(score>=0 && score<60)
	printf("等级为“不及格"); 
}
