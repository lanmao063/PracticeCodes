#include <stdio.h>
	struct student//结构体定义 
	{
		int age;//结构体的成员变量 
		int num;
		char name[7];
		char address[5];
		char phone[11];
	};
int main()
{
	struct student classstudent[3]={{18,001,"yaoji","qwe","1234578891"},{18,001,"yaoji","qwe","1234578891"},{18,001,"yaoji","qwe","1234578891"}};
	struct student *p;
	p=classstudent;
	p=p+2;
	printf("%d",p->age);	

}
