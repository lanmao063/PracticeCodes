#include <stdio.h>
#define STU struct student
//	struct student//结构体定义 
//	{
//		int age;//结构体的成员变量 
//		int num;
//		char name[7];
//		char address[5];
//		char phone[11];
//	};
struct ret
{
	int ret1;//成绩 
	char ret2[10];//排名 
};
struct ret tongji();
int main()
{
	struct ret ;
//	struct student yaoji;
//	yaoji.age=18;
//	yaoji.name="窑鸡轩";
//	yaoji.num=1001;
//	yaoji.address="铁中"; 
//	yaoji.phone="1234567890";
	s=tongji();
	printf("%d",s.ret1);
}
struct ret tongji()
{
	struct ret r1{100,"first"};
	return r1;
}
