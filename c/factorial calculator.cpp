#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char calculatefactorial(char *number,long long length);
char *generateNextNumber(char *number,long long length);
long long calculateTailZero(char *number,long long length);
int calculateHeadZero(char *nextNumber,long long length);
int main()
{
    char *number=NULL;
    char ch;
    int length=0;
    printf("请输入想要计算阶乘的数字: "); 
    while ((ch=getchar())!='\n' && ch!=EOF) 
	{
        number=(char *)realloc(number,(length+1)*sizeof(char));
        if (number==NULL) 
		{
            printf("内存分配失败!\n");
            return 1;
        }
        number[length]=ch;
        length++;
    }
    number=(char *)realloc(number,(length+1)*sizeof(char));
    number[length]='\0';
    printf("%s",generateNextNumber(number,length)); 
//  calculateFactorial(number,length)
} 
char calculateFactorial(char *number,long long length)
{
	
}
char *generateNextNumber(char *number,long long length)
{
	long long zeroNumber=calculateTailZero(number,length);
	char *nextNumber=(char*)malloc((length+1)*sizeof(char));
	strcpy(nextNumber,number);
	nextNumber[length-zeroNumber-1]=number[length-zeroNumber-1]-1;
	if(zeroNumber!=0)
	{
		for(int i=0;i<zeroNumber;i++)
		{
			nextNumber[length-1-i]='9';
		}
	}
	if(calculateHeadZero(nextNumber,length))
	{
		return(nextNumber+1);
	}	
	else
	{
		return nextNumber;
	}
}
long long calculateTailZero(char *number,long long length) 	//检测下一个数末尾有几个0，实现退位 
{
	long long zeroNumber=0;
	for(int i=length-1;i>0;i--)
	{
		if (number[i]=='0') 
		{
			zeroNumber++;
		}
		else
		{
			break;
		}
	}
	return zeroNumber;
}
int calculateHeadZero(char *nextNumber,long long length) 	//检测头部有几个0，实现退位 
{
	for(int i=0;i<length;i++)
	{
		if (nextNumber[i]=='0')
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
