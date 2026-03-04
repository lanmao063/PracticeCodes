#include <stdio.h>

int main() {
    char buffer[1000];
    
    printf("请输入一行文本：\n");
    if (fgets(buffer, 1000, stdin) != NULL) 
	{
        printf("你输入的内容是：%s", buffer);
    } 
	else 
	{
        printf("读取输入失败。\n");
    }
    
    return 0;
}

