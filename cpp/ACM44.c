#include <stdio.h>
#include <string.h>
int main()
{
	char a[3][50];
	char temp[50];
	char ch;
	int j=0;
	for(int i=0;i<3;i++)
	{
		while((ch=getchar())!=EOF&&ch!='\n')
		{
			a[i][j]=ch;
			j++;
		}
		a[i][j] = '\0'; 
		j=0;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		printf("%s\n",a[i]);
	}
}
