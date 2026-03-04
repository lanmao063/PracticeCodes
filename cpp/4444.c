#include <stdio.h>
int main()
{
	char gender;
	int age;
	printf("输入性别（男性：m；女性：f)，年龄：");
	scanf("%c %d",&gender,&age);
	if(!(gender=='m' || gender=='f') )
		printf("性别输入错误");
	else	 
		if(age<=0)
			printf("年龄输入错误");
		else
			if(gender=='m')
			{
				if(age>=22)
					printf("参军"); 
				else
					printf("参军条件不符");
			}
			else
			{
				if(age>=20)
					printf("参军"); 
				else
					printf("参军条件不符"); 
			}	

						
}
