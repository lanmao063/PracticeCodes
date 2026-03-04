#include <stdio.h>
int insertNumber(int *orgin,int latter,int serial);
int main()
{
	int orgin[10];
	for(int i=0;i<9;i++)
	{
		scanf("%d",&orgin[i]);
	}
	int latter,serial;
	scanf("%d",&latter);
	for(int i=0;i<9;i++)
	{
		if(orgin[i]>latter)
		{
			serial=i;
			break;
		}
	}
	insertNumber(orgin,latter,serial);
	for(int i=0;i<10;i++)
	{
		printf("%d\n",orgin[i]);
	}
} 
int insertNumber(int *orgin,int latter,int serial)
{
	int nextNumber;
	int temp=latter;
	for(int i=serial;i<10;i++)
	{
		nextNumber=orgin[i];
		orgin[i]=temp;
		temp=nextNumber;
	}
}
