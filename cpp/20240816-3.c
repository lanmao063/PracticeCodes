#include <stdio.h>
union student//结构体定义 
{
	int age;//结构体的成员变量 
	int num;
	char gender;
	float score;
}u_a;
int main()
{
	u_a.age=18;
	u_a.gender='F';
	u_a.num=1001;
	u_a.score=82.2;
	printf("%d\n",u_a.age);
	printf("%d\n",u_a.gender);	
	printf("%c\n",u_a.num);	
	printf("%f",u_a.score);	
	
}
