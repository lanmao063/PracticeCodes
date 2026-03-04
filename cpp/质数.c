#include <stdio.h>
#include <math.h>
int isPrime(int a) {
    if (a <= 1) 
        return 0;
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int temp = n;
    for (int i = 2; i <= temp; i++) {
        while (temp % i == 0 && isPrime(i)) {
            printf("%d ", i);
            temp /= i;
        }
    }
    
    printf("\n");
    return 0;
}

