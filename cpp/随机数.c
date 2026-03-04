#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    printf("请输入范围上限 n (大于0)：");
    scanf("%d", &n);

    if (n <= 0) {
        printf("范围必须大于0！\n");
        return 1;
    }

    srand(time(NULL)); // 设置随机数种子

    // 生成并打印100个0到n之间的随机数
    for (int i = 0; i < 100; i++) {
        int random_number = rand() % (n + 1); // 生成0到n之间的随机数
        printf("%d\n", random_number);
    }

    return 0;
}



