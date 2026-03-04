#include <stdio.h>
#include <math.h>
#define MAX_LENGTH 100

int inverse(int a[MAX_LENGTH], int length);

int main()
{
    int a[MAX_LENGTH];
    int count = 0, number, inverseNumber, sum, temp;


    scanf("%d", &number);

    temp = number;
    while (temp > 0) 
    {
        a[count] = temp % 10;  
        temp /= 10;
        count++;
    }

    int length = count;
    inverseNumber = inverse(a, length); 
    sum = number + inverseNumber; 

    printf("%d", sum);
    return 0;
}

int inverse(int a[MAX_LENGTH], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum * 10 + a[i]; 
    }
    return sum;
}


