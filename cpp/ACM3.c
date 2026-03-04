#include <stdio.h>
#include <string.h>
void Reverse(char temp[], int n);
int main() 
{
    char temp[100];
    fgets(temp, sizeof(temp), stdin);
    temp[strcspn(temp, "\n")]='\0';
    int length = strlen(temp);
    Reverse(temp, length);
}
void Reverse(char temp[], int n) 
{
    for (int i=0;i<n;i++)
	{
        char a = temp[i]+4;
        if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) 
		{
            temp[i] = a;
        }
        else
		{
        	temp[i]=a-26;
		}
		printf("%c",temp[i]);
    }
}

