#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    int prevIsLetter = 0;    
    while ((c = getchar()) != '\n') {
        if (islower(c) && !prevIsLetter) 
		{ 
            c = toupper(c);                 
            prevIsLetter = 1;               
        } 
		else if (!isalpha(c)) 
		{           
            prevIsLetter = 0;               
        } else {
            prevIsLetter = 1;               
        }
        putchar(c); 
    }

    return 0;
}

