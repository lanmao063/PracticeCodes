#include <stdio.h>
#include <string.h>
typedef struct 
{
	char name[100];
	char date[12];
	float salary;
} staff;
int main()
{
	staff employee;
	printf("输入名字，入职时间，工资：\n");
	scanf("%s",employee.name);
	scanf("%s",employee.date);	
	scanf("%f",&employee.salary);
	printf("%s %s %f",employee.name,employee.date,employee.salary);	
}
