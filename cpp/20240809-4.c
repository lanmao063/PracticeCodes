#include<stdio.h>
int main()
{
	int year;
	int leap;
	printf("输入年份:"); 
	scanf("%d",&year);
	if(year%400==0)
		leap=1;
	else
		if(year%4==0 && year%100!=0)
			leap=1;
		else
			leap=0;
	//if(leap==1)//计算机中≠0可以表示真 
	if(leap)//同上 
		printf("%d是闰年",year);
	else	 	
		printf("%d不是闰年",year);
}
