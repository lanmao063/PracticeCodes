#include <stdio.h>
#include <math.h>

int main()
{
	double x = 1.0;  // 初始值
    double limit;
    
    // 循环逐步减小 x
    for (int i = 0; i < 15; i++) 
	{
        limit = sin(x) / x;
        x /= 10.0;  // 将 x 减小到原来的十分之一
    }
	printf("x = %.15f, sin(x)/x = %.15f\n", x, limit);
    return 0;
}


