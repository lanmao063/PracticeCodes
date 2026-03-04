#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char gender;
    printf("输入性别及年龄：");
    scanf("%c%d",&gender,&age);
    switch(gender)
    {
        case'f':

            if(age>=60)
                printf("老太太");
            else
                if(age<60)
                    printf("小姐姐");
        break;

        case'm':

            if(age>=60)
                printf("糟老头子");
            else
                if(age<60)
                    printf("giegie");
        break;

        default:
            printf("?");

    }
}
