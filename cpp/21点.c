#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#define RATE 1.5
#define PRINCIPAL 114514
int isDuplicate(char newCard[], char playerCards[][20], int cardCount);
void updatePoints(int *sum, int cardIndex); 
int main()
{
	printf("21点小游戏\n		——made by 一酷幽Yuu\n");
	Sleep(4000);
	system("cls");
	printf("版权所有，侵权必究");
	Sleep(3000);
	system("cls");
	printf("声明：本游戏涉及的赌博元素纯属娱乐，现实中请不要模仿哦。") ;
	Sleep(4000);
	system("cls");
	printf("你的名字叫陈刀仔，你的目标是称霸澳门赌场。为此，你找你出手阔绰的狐朋狗友们借来了 %d 元钱，准备大展拳脚\n",PRINCIPAL);
	Sleep(5000);
	system("cls");
	printf("良好的开端，只有一半的概率失败。为此，你选择了赌场门口的21点牌桌。\n21点的规则十分简单，只要手里牌的点数之和大于庄家手里牌的点数就赢了。\n");
	Sleep(6000);
	system("cls");
	printf("因此，你踌躇满志的坐在了牌桌前。\n");
	Sleep(3000);
	system("cls");
	printf("欢迎来到21点！\n本游戏赔率为 %.2f \n",RATE);
	int gameIndex=1,money=PRINCIPAL;
	while(gameIndex)
	{
		srand(time(NULL));
		int random_number_color,random_number_number,judge,debt,result;
		int flag=1,marker=1,scout=1,playerSum=0,dealerSum=0,i=0,j=0;
		char dealer[10][20],player[10][20];
		char usedCards[52][20]; // 记录已使用的牌
	    int usedCount = 0; // 记录已使用的牌的数量
	    char fullDeck[52][20];
		char color[4][8]=
		{
			"红桃",
			"方片",
			"黑桃",
			"梅花"
		};
		const char *number[]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
		// 初始化整副扑克牌
	    for(int c=0;c<4;c++) 
		{
	        for(int q=0;q<13;q++) 
			{
	            sprintf(fullDeck[c*13+q],"%s%s",color[c],number[q]);
	        }
	    }
		if(money<0)
		{
			printf("抱歉，你已经破产。请离开。");
			break; 
		}
		printf("资产余额：%d\n",money);
		printf("请下注：");
		scanf("%d",&debt);
		if(debt>money)
		{
			printf("抱歉，你没那么多钱\n");
			continue; 
		}
		printf("买定离手\n");
		Sleep(1000);
		system("cls"); 
		printf("下注成功\n");
		Sleep(1000);
		system("cls"); 
		printf("开始发牌\n");
		Sleep(2000);
		for(i=0;i<2;i++)
		{
			random_number_number = rand() % 52; // 从 0 到 51 之间选择一张牌
	        while (isDuplicate(fullDeck[random_number_number], usedCards, usedCount)) 
			{
	            random_number_number = rand() % 52; // 重复则重新抽取
	        }
	        sprintf(usedCards[usedCount++], "%s", fullDeck[random_number_number]); // 标记为已使用的牌
			updatePoints(&dealerSum,random_number_number%13);
			sprintf(dealer[i], "%s", fullDeck[random_number_number]); // 存储庄家的牌
		}
		printf("庄家拿到的牌是:   ");
		Sleep(1500);
		printf("%s   ***\n",dealer[0]);
		Sleep(1000);
		printf("玩家拿到的牌是:   ");
		for(j=0;j<2;j++)
		{
			random_number_number=rand() % 52;
	        while(isDuplicate(fullDeck[random_number_number], usedCards, usedCount)) 
			{
	            random_number_number=rand() % 52;
	        }
	        sprintf(usedCards[usedCount++], "%s", fullDeck[random_number_number]);
			updatePoints(&playerSum, random_number_number%13);
			sprintf(player[j], "%s   ", fullDeck[random_number_number]);
			Sleep(1500);
			printf("%s",player[j]);
		}
		Sleep(1500);
		printf("\n玩家现在的总点数为：%d",playerSum);
		while(flag)
		{
			Sleep(2000);
			if(playerSum==21)
				{
					Sleep(1000);
					printf("\nBLACK JACK！！\n玩家赢！");
					Sleep(2000);
					marker=0;
					scout=0; 
					result=debt*RATE; 
					goto label; 
				}
			printf("\n选择接下来的操作：\n");
			if(scout)
			{
				printf("1.拿牌	2.停牌	3.加倍\n");
			}
			else
			{
				printf("1.拿牌	2.停牌\n");
			}
			scanf("%d",&judge);
			if(judge==1)
			{
				system("cls");
				random_number_number=rand() % 52;
		        while(isDuplicate(fullDeck[random_number_number], usedCards, usedCount)) 
				{
		            random_number_number=rand() % 52;
		        }
		        sprintf(usedCards[usedCount++], "%s", fullDeck[random_number_number]);
			 	updatePoints(&playerSum, random_number_number%13);
				sprintf(player[j], "%s   ", fullDeck[random_number_number]);
				printf("玩家拿到的牌是:   %s",player[j]);
				Sleep(2000);
				printf("\n玩家所拥有的牌有：   ");
				for(int m=0;m<=j;m++)
				{
					printf("%s   ",player[m]) ;
				} 
				Sleep(2000);
				printf("\n玩家现在的总点数为：%d",playerSum);
				if(playerSum>21)
				{
					Sleep(1000);
					printf("\n玩家爆牌！\n庄赢！");
					Sleep(2000);
					marker=0;
					result=-(debt*RATE);
					break;
				}
				j++;
			}	
			else if(judge==2)
			{
				printf("玩家的总点数为：%d",playerSum);
				break;
			}	
			else if((judge==3)&&(scout))
			{
				debt*=2;
				scout=0;
				printf("已加倍\n");	
			}
			else
			{
				printf("无效操作\n");
				continue; 
			}
		}
		if(marker)
		{
			printf("\n玩家结束拿牌，庄家开始拿牌");
			Sleep(2000);
			system("cls");
			printf("庄家现在手中的牌是：   ");
			for(int n=0;n<2;n++)
			{
				printf("%s   ",dealer[n]);
			} 
			Sleep(2000);
			printf("\n庄家现在的总点数为：%d",dealerSum);
			while(dealerSum<17)
			{
				printf("\n庄家继续拿牌");
				Sleep(2000);
				i++;
				random_number_number=rand() % 52;
		        while(isDuplicate(fullDeck[random_number_number], usedCards, usedCount)) 
				{
		            random_number_number=rand() % 52;
		        }
		        sprintf(usedCards[usedCount++], "%s", fullDeck[random_number_number]);
				updatePoints(&dealerSum, random_number_number%13);
				sprintf(dealer[j], "%s   ", fullDeck[random_number_number]);
				printf("\n庄家拿到的牌是:   %s",dealer[j]);
				Sleep(2000);
				printf("\n庄家所拥有的牌有：   ");
				for(int m=0;m<=j;m++)
				{
					printf("%s   ",dealer[m]) ;
				} 
				Sleep(2000);
				printf("\n庄家现在的总点数为：%d",dealerSum);
				if(dealerSum>21)
				{
					printf("\n庄家爆牌！");
					Sleep(2000);
					marker=0;
					result=0;
					break;
				}
			}			
			if(marker)
			{	
				Sleep(2000);
				system("cls");
				printf("拿牌结束");
				printf("\n玩家的总点数为%d，庄家的总点数为%d",playerSum,dealerSum);
				Sleep(3000);
				if(dealerSum>playerSum)
				{
					printf("\n庄赢！"); 
					result=-(debt*RATE);
				}
				else if(dealerSum==playerSum)
				{
					printf("\n平局！");
					result=0;
				}
				else
				{
					printf("\n玩家赢！"); 
					result=debt*RATE;
				}
				Sleep(3000);
			}
		}
		label:
		system("cls");
		printf("游戏结束！\n");
		if(result>0)
		{
			printf("这局你赢了%d元钱",result);
		}
		else if(result==0)
		{
			printf("这局你没输没赢"); 
		}
		else
		{
			printf("这局你输了%d元钱",-result);
		} 
		money=money+result; 
		printf("\n现在你的手里一共有%d元钱",money);
		printf("\n是否继续游戏？\n1.是   2.否\n");
		scanf("%d",&gameIndex);
		if(gameIndex==2)
		{
			gameIndex=0;
		} 
		system("cls");		
	}
	printf("欢迎下次再来玩！！！\n");
	system("pause");
} 
int isDuplicate(char newCard[], char usedCards[][20], int cardCount) 
{
    for (int i=0;i<cardCount;i++) 
	{
        if (strcmp(newCard, usedCards[i])==0) 
		{
            return 1; // 牌重复
        }
    }
    return 0; // 牌不重复
}
void updatePoints(int *sum, int cardIndex) 
{
    if (cardIndex==0) 
	{ 
        if (*sum+11>21) 
		{
            *sum+=1; 
        } 
		else 
		{
            *sum+=11;
        }
    } 
	else if (cardIndex>=10) 
	{ 
        *sum+=10;
    } 
	else 
	{
        *sum+=(cardIndex+1);
    }
}
