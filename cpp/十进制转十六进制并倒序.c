#include <stdio.h>

void Reverse(int n) 
{
    char buffer[1000];  
    int i = 0;  
    if (n == 0) 
	{
        putchar('0');
        return;
    }
    while (n > 0) 
	{
        int remainder = n % 16;  
        if (remainder < 10) 
		{
            buffer[i++] = remainder + '0';  
        } 
		else 
		{
            buffer[i++] = remainder - 10 + 'A'; 
        }
        n /= 16;  
    }
    for (int j = 0; j <= i-1; j++) 
	{
        putchar(buffer[j]);
    }  
}

int main() 
{
    int N;
    printf("请输入一个十进制数: ");
    scanf("%d", &N);
    printf("对应的十六进制数（倒序输出）: ");
    Reverse(N);  
    return 0;
}


