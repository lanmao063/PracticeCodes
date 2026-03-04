#include <stdio.h>
#include <stdlib.h>

int main() {
    char *buffer = NULL;  // 指针初始化为 NULL
    size_t size = 0;      // 初始大小为 0
    int c;                // 用于存储从 stdin 读取的字符
    size_t length = 0;    // 读取的字符长度

    // 从 stdin 动态读取字符直到遇到换行符
    while ((c = getchar()) != '\n' && c != EOF) {
        // 如果当前读取的字符数等于缓冲区大小，则扩展缓冲区
        if (length + 1 >= size) {
            size = size == 0 ? 1 : size * 2;  // 初始分配 1 字节，后续每次扩展为原来的两倍
            buffer = (char *)realloc(buffer, size);
            if (buffer == NULL) {
                // 内存分配失败，释放已分配的内存并退出
                printf("Memory allocation failed!\n");
                return 1;
            }
        }
        // 将读取的字符存入缓冲区
        buffer[length++] = (char)c;
    }
    // 终止符
    buffer[length] = '\0';
    
}

