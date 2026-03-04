#include <stdio.h>
int main()
{
	char a[10];
	int m=0,b=0,c=0;
	printf("输入待分类的字符："); 
	for(int i=0;i<10;i++)
	{
		scanf("%c",&a[i]);
		if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
		{
			m++;
		}
		else
		{
			if(a[i]>=48&&a[i]<=57)
			{
				b++;
			}
			else
			{
				c++;
			}
		}
	}
	printf("中英文字符有%d个\n数字有%d个\n其他字符有%d个\n",m,b,c);
 } 
