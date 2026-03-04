#include <stdio.h>
#include <string.h>
int main()
{
	int odd=0,zero=0;
	int temp[100];
	for(int i=0;i<100;i++)
	{
		scanf("%d ",&temp[i]);
	}
	int length=strlen(temp[100]);
	for(int j=0;j<length;j++)
	{
		if(temp[i]%2!=0)
		{
			odd++;	
		}
		if(temp[i]==0) 
		{
			zero++;
		}
	}
	printf("%d",length)
}
