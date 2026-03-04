#include <stdio.h>
int DayinTotal(int year,int month,int day);
int isLeapyear(int year);
typedef struct 
{
	int year;
	int month;
	int day;
} time;
int main()
{
	time t;
	scanf("%d",&t.year);
	scanf("%d",&t.month);
	scanf("%d",&t.day);
	printf("%d",DayinTotal(t.year,t.month,t.day));
}
int DayinTotal(int year,int month,int day)
{
	int february;
	if(isLeapyear(year))
	{
		february=29;
	}
	else
	{
		february=28;
	}
	int totalDays=0;
	for(int i=month-1;i>=1;i--)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			totalDays+=31;
		}
		else if(i==2)
		{
			totalDays+=february;
		}
		else
		{
			totalDays+=30;
		}
	}
	totalDays+=day;
	return totalDays;
}
int isLeapyear(int year)
{
	if(year%400==0)
	{
		return 1;
	}
	else if((year%100!=0)&&(year%4==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
