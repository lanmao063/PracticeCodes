#include <stdio.h>

#define MAX 5000 // 数组大小，确保可以存储非常大的阶乘

// 阶乘函数
void factorial(int n) {
    int result[MAX]; // 数组存储大数
    result[0] = 1;   // 初始值为 1
    int result_size = 1; // 当前有效数字长度

    // 从 2 到 n 依次乘入结果数组
    for (int x = 2; x <= n; x++) {
        int carry = 0; // 进位
        for (int i = 0; i < result_size; i++) {
            int prod = result[i] * x + carry;
            result[i] = prod % 10; // 存储当前位
            carry = prod / 10;    // 更新进位
        }

        // 处理剩余进位
        while (carry) {
            result[result_size] = carry % 10;
            carry /= 10;
            result_size++;
        }
    }

    // 输出结果，从高位到低位
    printf("Factorial of %d is: ", n);
    for (int i = result_size - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
}

// 主函数
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        factorial(n);
    }
    return 0;
}

