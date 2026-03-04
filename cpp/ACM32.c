#include <stdio.h>
#include <ctype.h>
#include <string.h>
void vowelLetter(char *orgin,char *vowel,int length);
int main()
{
	char orgin[10000],vowel[10000];
	scanf("%s",orgin);
	int length=strlen(orgin);
	vowelLetter(orgin,vowel,length);
	for(int i=0;i<length;i++)
	{
		printf("%c",vowel[i]);
	}
}
void vowelLetter(char *orgin,char *vowel,int length)
{
	int j=0;
	for(int i=0;i<length;i++)
	{
		if((orgin[i]=='a')||(orgin[i]=='e')||(orgin[i]=='i')||(orgin[i]=='o')||(orgin[i]=='u'))
		{
			vowel[j]=orgin[i];
			j++;
		}
		if((orgin[i]=='A')||(orgin[i]=='E')||(orgin[i]=='I')||(orgin[i]=='O')||(orgin[i]=='U'))
		{
			vowel[j]=tolower(orgin[i]);
			j++;
		}
	}
}
