#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main() 
{
    int temp;
	srand(time(NULL)); 
    int randomNumber = rand() % (101); 
    printf("一个0~100的随机数已生成，开始猜吧大笨蛋！\n");
	do
	{
		scanf("%d",&temp);
		if(temp>randomNumber)
		{
			printf("大笨蛋猜大了\n"); 
		}
		else
		{
			if(temp<randomNumber)
			{
				printf("大笨蛋猜小了\n"); 
			}
			else
			{
				printf("真棒，大笨蛋猜对了！\n"); 
				break;
			}
		}
	} while(1);
	Sleep(1000);
	system("pause");
}



