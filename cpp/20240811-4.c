#include<stdio.h>
void mark(int score);
void sort(int a,int b,int c);

int main()
{
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	sort(x,y,z);//（实际参数） 
}

void mark(int score)
{
	if(score>=90)
		printf("A");
	else
		if(score>=80)
			printf("B");
		else
			if(score>=70)
				printf("C");
			else
				if(score>=60)
					printf("D");
				else
					printf("E"); 			 
}

void sort(int a,int b,int c)//排序函数 ，传参 (形式化参数) 
{
	int t;//辅助变量
	if(a<b)
	{
		t=a;a=b;b=t;	//交换ab 
	}
	if(a<c)
	{
		t=a;a=c;c=t;	//交换ac 
	}
	if(b<c)
	{
		t=b;b=c;c=t;	//交换bc 
	}
	printf("\n%d",a);mark(a);
	printf("\n%d",b);mark(b);
	printf("\n%d",c);mark(c);
}


