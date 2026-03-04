#include <stdio.h>

int josephus(int n, int k) 
{
    int result = 0; 
    for (int i = 2; i <= n; i++) 
	{
        result = (result + k) % i;
    }
    return result + 1;
}

int main() 
{
    int n;
    printf("请输入初始人数 n: ");
    scanf("%d", &n);
    int last_person = josephus(n, 3);
    printf("最后留下的人的初始编号是: %d\n", last_person);
    return 0;
}

