#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> 

#define MAX_WORDS 1000   // 最大单词数量
#define MAX_LENGTH 1000  // 每个单词或含义的最大长度


int main() 
{
    srand(time(NULL));
    char words[MAX_WORDS][MAX_LENGTH];      // 存储单词
    char meanings[MAX_WORDS][MAX_LENGTH];   // 存储含义
    char temp[100];                          // 临时储存输入的意思 
    int i=0;
	int flag=0;								//查看用户是否想重复练习 
	int count = 0;							// 记录输入的单词数量
	int random_number;						 //随机数 
	int trueWords=0,wrongWords=0;    		//正确和错误词计数器 
	int tested[MAX_WORDS] = {0}; 			// 初始化测试标记数组
    printf("扶朕起来，朕还能背单词！\n");
	Sleep(2000);
	system("cls");
	printf("就背单词\n	——一酷幽Yuu出品\n");                 
	Sleep(3000);
	system("cls");
	printf("使用方法：\n首先输入想要背的单词以及对应的意思，输入后按回车。输入“0”结束输入环节，开始测试环节。\n");
	Sleep(4000); 
	system("cls");
    while (count < MAX_WORDS) 
	{
        printf("输入'0'来结束输入单词并开始测试环节\n");
		printf("请输入单词：");
        fgets(words[count], MAX_LENGTH, stdin);
        words[count][strcspn(words[count], "\n")] = 0; // 去除换行符

        if (strcmp(words[count], "0") == 0) 
		{
            break;  // 结束输入
        }

        printf("请输入 '%s' 的含义：", words[count]);
        fgets(meanings[count], MAX_LENGTH, stdin);
        meanings[count][strcspn(meanings[count], "\n")] = 0; // 去除换行符
        count++;  // 增加单词计数
        system("cls");
    }
	system("cls");
    printf("开始测试！");
    Sleep(1500);
    system("cls");
    do
    {
		for (i = 0; i <count; i++) 
		{
	        do 
			{
	            random_number = rand() % count; // 生成有效范围的随机数
	        } while (tested[random_number]); // 检查是否已经测试过       
	        tested[random_number] = 1;
	        // 标记为已测试
			if (strcmp(words[random_number], "0") != 0) 
	        {
		        printf("请解释单词：%s\n", words[random_number]); // 输出随机单词
		        printf("请输入你的答案：");        
		        scanf("%s",&temp); 										//为什么用putchar不好使？ 
		        temp[strcspn(temp, "\n")] = 0; // 去除换行符
		        // 使用 strcmp 判断字符串是否一致
		        if (strcmp(meanings[random_number], temp) == 0) 
				{
		            printf("答对了！\n");
		            trueWords++;
		        } 
				else 
				{
		            printf("答错了，正确的答案是：%s\n", meanings[random_number]);
		            wrongWords++;
		        }
		        Sleep(1500);
				system("cls");
			}		
	    }
		printf("一共答对了%d个单词，答错了%d个单词\n",trueWords,wrongWords);
	    if(wrongWords==0)
	    {
	    	printf("你真棒！！！\n"); 
		}
		else if(wrongWords>=trueWords)
		{
			printf("菜，就多练\n");
		}
		else
		{
			printf("继续加油！\n"); 
		}
		printf("是否想要再练一遍？\n1：是\n2：否\n0：睡觉\n");
		scanf("%d",&flag); 
		if(flag==2)
		{
			break;
		} 
		else if(flag==1) 
		{
			memset(tested, 0, sizeof(tested)); 	
			i=0,trueWords=0,wrongWords=0;
			system("cls");
			continue; 
		}
		else 
		{
			printf("晚安，玛卡巴卡！");
			Sleep(500);
			SetSystemPowerState(1,1); 
		}
	}while(1);	
	system("cls");
	printf("感谢使用，欢迎下次来玩！\n"); 
	Sleep(2000);
}

