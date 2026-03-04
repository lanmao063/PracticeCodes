#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char input[256];

    // 获取文件名
    printf("请输入要写入的文件名：");
    scanf("%s", filename);

    // 打开文件以写入
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("无法打开文件进行写入。\n");
        return 1;
    }

    // 获取用户输入并写入文件
    printf("请输入要写入的内容（按 Ctrl+D 结束输入）：\n");
    while (fgets(input, sizeof(input), stdin) !=NULL) {
        fprintf(file, "%s", input);
    }

    // 关闭文件
    fclose(file);
    printf("内容已成功写入 %s。\n", filename);
    
    return 0;
}

