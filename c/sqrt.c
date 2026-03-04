#include <stdio.h>
#include <math.h>
int mysqrt(int n);
int main()
{
    int n;
    scanf("x=%d", &n);
    printf("%d",mysqrt(n));
}
int mysqrt(int n)
{
    return ((int)sqrt(n));
}