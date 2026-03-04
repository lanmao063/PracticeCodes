#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int countKeyChange(char *s);
int main()
{
    char s[100];
    scanf("%s",s);
    int count=countKeyChange(s);
    printf("%d",count);
}
int countKeyChange(char *s)
{
    int length=strlen(s);
    int count=0;
    char model=s[0];
    for(int i=1;i<length;i++)
    {
        if(!(s[i]==model||s[i]==toupper(model)||s[i]==tolower(model)))
        {
            model=s[i];
            count++;
        }
    }
    return count;
}