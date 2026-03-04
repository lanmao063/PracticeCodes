#include <stdio.h>
#include <ctype.h>

char converse(char temp);

int main() {
    char temp;
    printf("ÊäÈë×Ö·û´®: ");
    while ((temp = getchar()) != '\n') 
	{
        if (isalpha(temp)) 
		{
            printf("%c", converse(temp)); 
        } 
		else if(!(temp>=48&&temp<=57))
		{
            printf("%c", temp); 
        }
    }
    printf("\n");
}

char converse(char temp) 
{
    if (temp >= 'A' && temp <= 'Z') 
	{
        temp = temp + 5;
        if (temp > 'Z') 
		{ 
            temp = temp - 26;
        }
        temp = tolower(temp);  
    } 
    else if (temp >= 'a' && temp <= 'z')
	{
        temp = temp + 5;
        if (temp > 'z') 
		{  
            temp = temp - 26;
        }
        temp = toupper(temp);  
    }

    return temp; 
}

