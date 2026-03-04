#include <stdio.h>
#include <math.h>
int main()
{
	int tempA,tempB;
	printf("输入两个整数：");
	scanf("%d %d",&tempA,&tempB);
	if(pow(tempA,2)+pow(tempB,2)>100)
	{
		printf("%d",tempA+tempB);
	} 
	else
	{
		printf("%d",tempA*tempB);
	}
}
