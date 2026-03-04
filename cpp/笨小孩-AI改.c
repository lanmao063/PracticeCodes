#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int competerMax(int *sum, int length);
int competerMin(int *sum, int length);
int checker(int number);

int main() {
    char input[100];
    int length, counter;
    
    printf("输入单词：");
    scanf("%s", input);
    
    length = strlen(input);
    int sum[256] = {0}; // 假设字符集为ASCII

    // 统计每个字符出现的次数
    for (int i = 0; i < length; i++) {
        sum[(unsigned char)input[i]]++; // 用字符的ASCII值作为索引
    }

    int max = competerMax(sum, 256);
    int min = competerMin(sum, 256);
    int result = checker(max - min);    

    if (result == 0) {
        printf("No Answer\n%d\n", result);
    } else {
        printf("Lucky Number!\n%d\n", max - min);
    }

    return 0;
}

int competerMax(int *sum, int length) {
    int max = sum[0];
    for (int i = 1; i < length; i++) {
        if (sum[i] > max) {
            max = sum[i];
        }
    }
    return max;
}

int competerMin(int *sum, int length) {
    int min = sum[0];
    for (int i = 1; i < length; i++) {
        if (sum[i] < min && sum[i] > 0) { // 只考虑出现过的字符
            min = sum[i];
        }
    }
    return min;
}

int checker(int number) {
    if (number <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1; // 返回1表示是质数
}

