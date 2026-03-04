#include <stdio.h>
#include <math.h>
long long calculateResult(int size);
long long calculateAttackable(int size);
int judge(int temp);
int main()
{
	int n;
	long long result;
	printf("input you chessboard size:");
	scanf("%d",&n);
	for(int size=1;size<=n;size++)
	{
		printf("When the size is %d,",size);
		result=calculateResult(size)-calculateAttackable(size);
		printf("result is %lld\n",result);
		printf("%lld\n",result);
	}
	
} 
long long calculateResult(int size)
{
	return (long long)pow(size,2)*(pow(size,2)-1)/2;
}
long long calculateAttackable(int size)
{
	int n=judge(size-4);
	if(size==1||size==2)
	{
		return 0;
	}
	else if(size==3)
	{
		return 8;
	}
	else 
	{
		return (long long)(4*2+3*8+4*4+4*n*4+4*n*6+pow(n,2)*8)/2;
	}
}
int judge(int temp)
{
	if(temp>0)
	{
		return temp;
	}
	else
	{
		return 0;
	}
}
