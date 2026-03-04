#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define MAX 100 // 定义栈的最大容量

// 定义栈结构
double stack[MAX];
int top = -1; // 栈顶指针

// 将值压入栈
void push(double value) {
    if (top < MAX - 1) {
        stack[++top] = value; // 将值放入栈中
    } else {
        printf("堆栈溢出！\n");
    }
}

// 从栈中弹出值
double pop() {
    if (top >= 0) {
        return stack[top--]; // 返回栈顶值并减小栈顶指针
    } else {
        printf("堆栈空！\n");
        return 0.0; // 返回0以防止错误
    }
}

// 检查字符是否为操作符
int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == 'l' || c == 's' || c == 'c' || c == 't';
}

// 获取操作符优先级
int precedence(char op) {
    switch (op) {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        case 'l': // 自然对数
        case 's': // 正弦
        case 'c': // 余弦
        case 't': // 正切
            return 3;
        default: return 0;
    }
}

// 将中缀表达式转换为逆波兰表示法
void infixToPostfix(const char* expression, char* output) {
    char stack[MAX];
    int top = -1; // 用于操作符栈
    char* token = strtok(strdup(expression), " "); // 分割字符串
    int index = 0;

    while (token != NULL) {
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
            // 如果是数字，直接添加到输出中
            index += sprintf(output + index, "%s ", token);
        } else if (isOperator(token[0])) {
            while (top >= 0 && precedence(stack[top]) >= precedence(token[0])) {
                index += sprintf(output + index, "%c ", stack[top--]);
            }
            stack[++top] = token[0]; // 将操作符压入栈
        }
        token = strtok(NULL, " ");
    }

    while (top >= 0) {
        index += sprintf(output + index, "%c ", stack[top--]); // 将剩余操作符弹出到输出
    }
    output[index] = '\0'; // 结束字符串
}

// 进行基本计算
double calculate(double a, double b, char op) {
    switch (op) {
        case '+': return a + b; // 加法
        case '-': return a - b; // 减法
        case '*': return a * b; // 乘法
        case '/':
            if (b != 0) return a / b; // 除法，检查除数是否为零
            else {
                printf("错误：除数不能为零！\n");
                return 0;
            }
        default: return 0; // 默认返回0
    }
}

// 评估输入的逆波兰表达式
void evaluate(const char* expression) {
    char* token = strtok(strdup(expression), " "); // 将输入字符串分割为多个token
    
    while (token != NULL) {
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
            // 如果是数字（包括负数），将其压入栈
            push(atof(token)); // 将字符串转换为浮点数并压入栈
        } else if (isOperator(token[0])) {
            if (token[0] == 'l') { // 自然对数
                double value = pop(); // 弹出栈顶值
                push(log(value)); // 计算自然对数并压入栈
            } else if (token[0] == 's') { // 正弦
                double value = pop();
                push(sin(value)); // 计算正弦值并压入栈
            } else if (token[0] == 'c') { // 余弦
                double value = pop();
                push(cos(value)); // 计算余弦值并压入栈
            } else if (token[0] == 't') { // 正切
                double value = pop();
                push(tan(value)); // 计算正切值并压入栈
            } else {
                double b = pop(); // 弹出第二个操作数
                double a = pop(); // 弹出第一个操作数
                push(calculate(a, b, token[0])); // 进行计算并将结果压入栈
            }
        } else {
            printf("不支持的操作符：%s\n", token); // 处理不支持的操作符
        }
        token = strtok(NULL, " "); // 获取下一个token
    }

    printf("结果: %.2f\n", pop()); // 弹出并打印最终结果
}

int main() {
    char input[256]; // 用于存储用户输入的表达式
    char postfix[256]; // 用于存储逆波兰表示法表达式

    printf("请输入中缀表达式（例如：3 4 +，l 2.718，s 1.57）：\n");
    fgets(input, sizeof(input), stdin); // 读取用户输入

    infixToPostfix(input, postfix); // 转换为逆波兰表示法
    printf("逆波兰表示法: %s\n", postfix); // 输出逆波兰表示法

    evaluate(postfix); // 调用评估函数进行计算

    return 0; // 程序结束
}


