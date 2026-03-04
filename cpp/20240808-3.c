#include <stdio.h>
int main()
{
	int score;
	printf("输入分数(0~100):");
	scanf("%d",&score);
	if(score>100 || score<0)
		printf("请重新输入");
	else	
		if(score>=90)
			printf("等级为“优”");
		else
			if(score>=80)
				printf("等级为“良”");
			else
				if(score>=70)
					printf("等级为“中”");
				else
					if(score>=60)
						printf("等级为“及格”");
					else
							printf("等级为“不及格”"); 			 
}
