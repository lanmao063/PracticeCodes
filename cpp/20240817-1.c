#define NULL 0
#include <stdio.h>
#include <malloc.h>
struct student 
{
	int age;
	int num;
	char gender[2];
	float score;
	struct student *next;
};
int main() 
{
	struct student *p,*q;
	struct student stu0={18,1001,"M",82.2,NULL};
	struct student stu1={18,1002,"F",83.2,NULL};
	struct student stu2={18,1003,"F",84.3,NULL};
	struct student stu3={18,1004,"M",85.7,NULL};
	stu0.next=&stu1;
	stu1.next=&stu2;
	stu2.next=&stu3;
	p=&stu0;
	printf("%6.2f\n",p->score);
	while(p->next!=NULL)
	{
		p=p->next;
		printf("%6.2f\n",p->score);
	}
	int a=sizeof(struct student);
	q=(struct student*)malloc(a);//以struct student指针类型结构分配指定大小的空间
	//q=(int*)calloc(10,sizeof(int));数组指针分配空间，10个整形。 
	//free（）通过地址释放空间 
	p->next=q;
	q->score=85.1;
	printf("%6.2f\n",q->score);
	int delnum=1002;
	p=q=&stu0;
	while(p->next!=NULL)
	{
		p=p->next;
		if(p->num==delnum)
		{
			q->next=p->next;
			break;
		}
		q=p;	
	} 
	printf("最终结果"); 
	p=&stu0;
	printf("%6.2f",p->score);
	while(p->next!=NULL)
	{
		p=p->next;
		printf("%6.2f\n",p->score);
	}
	
}
