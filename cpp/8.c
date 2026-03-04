#include <stdio.h>
int main()
{
	int temp,max,min;
	scanf("%d",&temp);
	max=temp;
	min=temp;
	do
	{
		scanf("%d",&temp);
		if(temp!=-1)
		{
			if(temp>max)
			{
				max=temp;
			}
			if(temp<min)
			{
				min=temp;
			}	
		}
		else
		{
			break;
		}	
	}while(1);
	printf("%d %d",max,min);
}
