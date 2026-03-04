#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h> 
typedef struct Listnode
{
	int id;
	int score;
	struct Listnode *nextnode;
}Listnode;
void InsertHead(Listnode **L);
void printList(Listnode *L);
void Deletestudent(Listnode **L);
int decideToContinue();
int main()
{
	printf("成绩管理\n");
	Sleep(2000);
	system("cls");
	Listnode *L=NULL;
	do
	{
		InsertHead(&L);
	}while(decideToContinue());
	int op;
	while(1)
	{
		printf("选择功能\n1.按照降序打印学生成绩\n2.删除学生\n3.增加学生\n4.退出\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				printList(L);
				break;
			case 2:
				Deletestudent(&L);
				break;
			case 3:
				InsertHead(&L);
				break;
			case 4:
				printf("bye-bye");
				return 0;
		} 
	}
	
} 
void InsertHead(Listnode **L)
{
	Listnode *newnode=(Listnode*)malloc(sizeof(Listnode));
	printf("input id number:");
	scanf("%d",&newnode->id);
	printf("input score:");
	scanf("%d",&newnode->score);
	newnode->nextnode=*L;
	*L=newnode;
	printf("student %d input successfully",newnode->id);
	Sleep(2000);
	system("cls");
}
void printList(Listnode *L)
{
	system("cls");
	printf("Ranking……\n");
	int swapped=0,temp;
	Listnode *cur,*rank=NULL;
	do
	{
		swapped=0;
		cur=L;
		while(cur->nextnode!=rank)
		{
			if(cur->score < cur->nextnode->score)
			{
				temp=cur->score;
				cur->score=cur->nextnode->score;
				cur->nextnode->score=temp;
				temp=cur->id;
				cur->id=cur->nextnode->id;
				cur->nextnode->id=temp;
				swapped=1; 
			}
			cur=cur->nextnode;	
		}
		rank=cur;
	}while(swapped);
	cur=L;
	while(cur!=NULL)
	{
		printf("id:%d score:%d\n",cur->id,cur->score);
		cur=cur->nextnode;
	}
	printf("Press any key to continue\n");
	getchar();
	getchar();
	system("cls");
	return;
}
void Deletestudent(Listnode **L)
{
	Listnode *cur,*temp;
	int id,index=0,scout=0;
	do
	{
		printf("input student id that you want to delete:");
		scanf("%d",&id);
		cur=*L;
		if(cur->id == id)
		{
			temp=cur;
			*L=cur->nextnode;
			free(temp);
			index=1;
		}
		while(cur!=NULL&&index==0)
		{
			if(cur->nextnode->id==id)
			{
				temp=cur->nextnode;
				cur->nextnode=cur->nextnode->nextnode;
				free(temp);
				index=1;
			}
			else
			{
				cur=cur->nextnode;
			}
		}
		if(index==0)
		{
			printf("Student Not Found,Please check id!");
			scout=1;
			Sleep(2000);
			system("cls");
		}
		else
		{
			printf("student %d has been deleted",id);
		}
	}while(scout);
	Sleep(1000);
	system("cls");
}
int decideToContinue()
{
	int index;
	printf("Do you want to continue?(1 or 0):");
	scanf("%d",&index);
	system("cls");
	return index;
}


