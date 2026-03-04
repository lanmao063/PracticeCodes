#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int competerMax(int *sum,int length);
int competerMin(int *sum,int length);
int checker(int number);
int main()
{
	char input[100];
	char buffer[100];
	char word;
	int length;
	int counter=0;
	printf(" ‰»Îµ•¥ £∫");
	scanf("%s",input);
	for (int m = 0; input[m] != '\0'; m++) 
	{
        sprintf(&buffer[m], "%c", input[m]);
    }
	length=strlen(buffer);
	int sum[length];
	for(int i=0;i<length;i++)
	{
		for(int j=0;j<length;j++)
		{
			if(buffer[i]==buffer[j])
			{
				counter++;
			}
		}
		sum[i]=counter;
		counter=0;
	}	
	int max=competerMax(sum,length);
	int min=competerMin(sum,length);
	int result=checker(max-min);	
	if(result==0)
	{
		printf("No Answer\n%d",result);
	}	
	else
	{
		printf("Lucky Number!\n%d",max-min);
	}	
}
int competerMax(int *sum,int length)
{
	int max=sum[0];
	for(int i=1;i<=length;i++)
	{
		if(sum[i]>max)
		{
			max=sum[i];
		}
	}
	return max;
}
int competerMin(int *sum,int length)
{
	int min=sum[0];
	for(int i=1;i<length;i++)
	{
		if(sum[i]<min)
		{
			min=sum[i];
		}
	}
	return min;
}
int checker(int number)
{
	if(number<=1)
	{
		return 0;
	}
	else
	{
		for(int i=2;i<=sqrt(number);i++)
		{
			if(number%i==0)
			{
				return 0;
			}
		}
	}
}
