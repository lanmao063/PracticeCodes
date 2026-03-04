#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
typedef struct Listnode
{
	int id;
	int score;
	struct Listnode* nextnode;
}Listnode;
void InsertHead(Listnode** L);
void printList(Listnode* L);
int main()
{
	printf("成绩管理");
	Sleep(1000);
	system("cls");
	int index;
	Listnode* L=NULL;
	do
	{
		InsertHead(&L);
		printf("continue?(1 or 0)");
		scanf("%d",&index);
		system("cls");
	}while(index);
	printList(L);
} 
void InsertHead(Listnode** L)
{
	Listnode* newnode=(Listnode*)malloc(sizeof(Listnode));
	printf("input id:");
	scanf("%d",&newnode->id);
	printf("input score:");
	scanf("%d",&newnode->score);
	newnode->nextnode=*L;
	*L=newnode;
}
void printList(Listnode *L)
{
	Listnode* cur=L;
	while(cur!=NULL)
	{
		printf("id:%d\t",cur->id);
		printf("score:%d\n",cur->score);
		cur=cur->nextnode;
	}
	printf("-----------------------");
}
