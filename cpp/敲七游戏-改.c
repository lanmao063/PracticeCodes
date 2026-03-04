#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() 
{
    char num[100]; 
    int arr[100]; 
    int m=0,sum,flag;
    printf("写程序无聊，玩个游戏\n敲七游戏\n游戏规则：从1开始喊数，数到含7或者是7的倍数的要拍键盘！\n请输入范围："); 
    scanf("%d",&flag);  
    for(int q=2;q<=flag;q++)
	{
		if(q%7==0)
		{
			m++;
		}
		else
		{
			sprintf(num, "%d", q); 
			int length = strlen(num);
			for (int i = 0; i < length; i++) 
			{
		        arr[i] = num[i] - '0'; 
			}
			int j=0;
			while(j<length)
			{
				if(arr[j]==7)
				{
					m++;
					break;
				}
				else
				j++;
			}				
		}
	}
	printf("从1喊到%d共需要拍%d次键盘！",flag,m);
}

