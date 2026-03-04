#include <stdio.h>
float calculateCommission(float salary) ;

int main()
{
	float salary=0,tips=0;
	printf("请输入利润，按回车确认：");
	scanf("%f",&salary);
	tips=calculateCommission(salary);
	printf("提成为%.3f",tips); 
}
float calculateCommission(float salary)
{
	if(salary<50000)
		salary=0;
	else if(salary<100000)
		salary=salary*0.1;
	else if(salary<200000)
		salary=salary*0.075;
	else if(salary<300000)
		salary=salary*0.05;
	else
		salary=salary*0.02;
	return salary;
} 
