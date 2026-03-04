#include <stdio.h>
typedef struct 
{
	int id;
	char name[20];
	int score[3];
}Student;
int main()
{
	
	int sum;
	float average;
	Student student[5];
	for(int i=0;i<5;i++)
	{
		printf("输入学号："); 
		scanf("%d",&student[i].id);
		printf("输入姓名：");
		scanf("%c",&student[i].name);
		for(int j=0;j<3;j++)
		{
			printf("分别输入三科成绩：");
			scanf("%d ",&student[i].score[j]);
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		{
			sum+=student[j].score[i];
			average=sum/5;
			printf("%f",average);
		}
	}
	
	
} 
