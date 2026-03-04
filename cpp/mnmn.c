#include <stdio.h>
int countCows(int n);

int main() 
{
    int n;
    printf("请输入年份 n: ");
    scanf("%d", &n);
    int totalCows = countCows(n);
    printf("第 %d 年共有 %d 头母牛\n", n, totalCows);
    return 0;
}
int countCows(int n) 
{
	if (n==0) return 0;//第0年-1头老牛 
    if(n>=1 && n<=3) return 1+countCows(n-1) ;//第1~3年小母牛不生小母牛 
    if(n>=4) return n+countCows(n-1);// 从第四年开始，每头小母牛每年都会生小母牛 
    
    
    //countCows(n - 1) + countCows(n - 2) + countCows(n - 3);
}

