#include <stdio.h>
#include <string.h>
int main()
{
	char a[10000],b[10000];
	scanf("%s",a);
	scanf("%s",b);
	int lengthA=strlen(a);
	int lengthB=strlen(b);
	char c[20000];
	int i=0;
	for(int j=0;j<lengthA;j++)
	{
		c[i]=a[j];
		i++;
	} 
	for(int j=0;j<lengthA;j++)
	{
		c[i]=b[j];
		i++;
	} 
	int lengthC=strlen(c);
	for(int k=0;k<lengthC;k++)
	{
		printf("%c",c[k]);
	}
} 
