#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
int AND(int a,int b) {
    return a && b;
}

int OR(int a,int b) {
    return a || b;
}

int main() {
    int A,B,C;
    bool result;
    while(1)
    {
        printf("input three judges(0 or 1):");
        scanf("%d %d %d",&A,&B,&C);
        if(A==114514&&B==1919810&&C==114)
        {
            break;
        }
        result=OR(AND(A,B),OR(AND(A,C),AND(B,C)));
        printf("The result is %d\n",result);
    }
        system("pause");   
}