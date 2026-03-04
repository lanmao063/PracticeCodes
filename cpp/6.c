#include <stdio.h>
#define TIME 100.00
#define BASIC 20.00
int main()
{
	float temp;
	printf("输入通话时长：");
	scanf("%f",&temp);
	if(temp<=TIME)
	{
		printf("%.2f",BASIC);
	}
	else
	{
		printf("%.2f",(temp-TIME)*0.2+BASIC);
	} 
}
