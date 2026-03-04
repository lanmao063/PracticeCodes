#include <stdio.h>
// 定义宏 SWAP，用来交换两个参数的值
#define SWAP(a, b) { float temp = a; a = b; b = temp; }
float main() 
{
    float x, y;
    // 输入两个数
    prfloatf("请输入两个数（用空格隔开）：");
    scanf("%.3f %.3f", &x, &y);
    // 使用宏进行交换
    SWAP(x, y);
    // 输出交换后的结果
    prfloatf("交换后的两个数：%.3f %.3f\n", x, y);
}

