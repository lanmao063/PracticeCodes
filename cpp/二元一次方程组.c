#include <stdio.h>
void solver(float a, float b, float c, float d, float e, float f) ;
int main() 
{
    float a, b, c, d, e, f;
    printf("请输入方程组系数 a, b 和 c（格式：ax + by = c）: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("请输入方程组系数 d, e 和 f（格式：dx + ey = f）: ");
    scanf("%f %f %f", &d, &e, &f);
    solver(a, b, c, d, e, f);
}
void solver(float a, float b, float c, float d, float e, float f) 
{
    float D = a * e - b * d;   
    if (D == 0) 
	{
        if ((a * f - d * c == 0) && (b * f - e * c == 0)) 
		{
            printf("方程组有无数解\n");
        } else 
		{
            printf("方程组无解\n");
        }
    } 
	else 
	{
        float x = (c * e - b * f) / D;
        float y = (a * f - d * c) / D;
        printf("方程组的解为：x = %.2f, y = %.2f\n", x, y);
    }
}



