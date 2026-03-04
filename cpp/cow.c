#include <stdio.h>

typedef struct {
    int oldCows;  
    int youngCows;
}Cows;

Cows calculateCows(int n) {
    Cows cows;
    if (n==1){ 
        cows.oldCows=1;
        cows.youngCows=1;
    } else if (n==2){
        cows.oldCows=1;
        cows.youngCows=2;
    }else if(n==3){
    	cows.oldCows=1;
        cows.youngCows=3;
	} else {
        Cows prevYear=calculateCows(n-1);
        cows.oldCows=prevYear.oldCows+prevYear.youngCows;
        cows.youngCows=prevYear.oldCows;
    }
    return cows;
}

int main() {
  
    int n;
    printf("请输入年份 n: ");
    scanf("%d",&n);
    Cows result = calculateCows(n);
    printf("第 %d 年共有 %d 头母牛\n",n,result.oldCows+result.youngCows);
    return 0;
}
