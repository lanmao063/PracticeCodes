#include <stdio.h>
int main()
{
	long max=1,i=1;
	char code1,code2,c;
//	printf("ÊäÈë¼î»ùÐòÁÐ£º");
	code1=getchar();
	while((c=getchar())!='\n')
	{
		code2=c;
		if(code1==code2)
		{
			i=i+1;
		}
		else
		{
			if(i>max)
			{
				max=i;
			}
			i=1;
		}
		code1=code2;	
	}
	if(i>max)
	{
		max=i;
	}
	printf("%ld",max);	
} 
