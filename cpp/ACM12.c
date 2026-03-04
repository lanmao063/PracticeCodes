#include <stdio.h>
void isChar(int temp,int *a,int *b,int *c,int *d);
int main()
{
	char temp;
	int a=0,b=0,c=0,d=0;
	while ((temp=getchar())!='\n')
	{
		isChar((int)temp,&a,&b,&c,&d);
	}
	printf("%d %d %d %d",a,b,c,d);
} 
void isChar(int temp,int *a,int *b,int *c,int *d)
{
	if(((temp>=65)&&(temp<=90))||((temp>=97)&&(temp<=122)))
	{
		(*a)++;
	}
	else if((temp>=48)&&(temp<=57))
	{
		(*b)++;
	}
	else if(temp==32)
	{
		(*c)++;
	}
	else
	{
		(*d)++;
	}
}
