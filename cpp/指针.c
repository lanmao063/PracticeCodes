#include <stdio.h>

int add;   // Variable to store sum
int plus;  // Variable to store product

void mathOperation(int a, int b);  // Function prototype

int main()
{
    int a, b;
    printf("输入两个数：");
    scanf("%d %d", &a, &b);  // Input two integers
    mathOperation(a, b);  // Call the function to perform math operations
    printf("Sum: %d, plus: %d\n", add, plus);  // Output the results
    return 0;
}

void mathOperation(int a, int b)
{
    add = a + b;  // Store the sum of a and b
    plus = a * b;  // Store the product of a and b
}

