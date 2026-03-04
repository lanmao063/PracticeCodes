#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* getEncryptedString(char* s, int k);
int main()
{
    char str[101], ch;
    int i=0,shift;
    while((ch=getchar())!='\n')
    {
        str[i]=ch;
        i++;
    }
    str[i] = '\0';
    scanf("%d",&shift);
    char *result=getEncryptedString(str, shift);
    printf("%s",result);
}
char* getEncryptedString(char* s, int k)
{
     int len=strlen(s);
    char* encrypted = (char*)malloc(len + 1);
    for (int i = 0; i < len; i++) 
    {
        int newPos=(i+k)%len;
        encrypted[i]=s[newPos];
    }
    encrypted[len] = '\0';
    return encrypted;
}