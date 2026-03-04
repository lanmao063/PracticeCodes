#include <stdio.h>
#include <ctype.h>

void judger(char aim);

int main()
{
    char aim;
    scanf("%c", &aim);	
    getchar();  // ¶ÁÈ¡²¢¶ªÆú»»ÐÐ·û
    judger(aim);
    return 0;
} 

void judger(char aim)
{
    char temp;
    int firstPos = -1, lastPos = -1;
    int i = 0;

    while ((temp = getchar()) != '\n') 
    {
        if (tolower(temp) == tolower(aim)) 
        {
            if (firstPos == -1) 
            {
                firstPos = i;
            }
            lastPos = i;
        }
        i++;
    }
    
    if (firstPos != -1) 
    {
        printf("%d", firstPos);
        if (lastPos != firstPos) 
        {
            printf(" %d", lastPos);
        }
    } 
    else 
    {
        printf("-1");
    }
}

