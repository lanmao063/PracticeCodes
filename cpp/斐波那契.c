#include<stdio.h>
#include<windows.h>
unsigned long long g(int n)
{
    unsigned long long f;
    if(n==1){
        f=1;
    }else if(n==2){
        f=1;
    }else{
        f=g(n-1)+g(n-2);
    }
    return f;
}

int main(void)
{
    printf("斐波那契数列，请输入数列的项数n=");
    int x;
    scanf("%d",&x);
    printf("an=%d",g(x));
    system("pause");
    return 0;
}
