#include <stdio.h>
int main()
{
	int temp;
	printf("输入以秒为单位的时间：");
	scanf("%d",&temp);
	int hour,minute,second;
	hour=temp/3600;
	temp=temp-hour*3600;
	minute=temp/60;
	temp=temp-minute*60;
	second=temp;
	printf("%02d:%02d:%02d",hour,minute,second); 	
} 
