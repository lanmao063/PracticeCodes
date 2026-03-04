#include <stdio.h>
void calculater(int x,int y,int z,int *temp);
int main()
{
	int x,y,z,temp;
	scanf("%d %d %d",&x,&y,&z);
	if(y==z)
	{
		printf("0");
	}
	else
	{
		calculater(x,y,z,&temp);
		printf("%d",temp);
	}
} 
void calculater(int x,int y,int z,int *temp)
{
	*temp=x/(y-z);
}
