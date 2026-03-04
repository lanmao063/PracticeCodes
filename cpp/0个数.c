#include <stdio.h>
int calculatefive(long long n);
int main()
{
	long long n;
	//printf("enter your number:");
	scanf("%lld",&n);
	int i=calculatefive(n);
	//printf("total number of 0 is %d",i);
	printf("%d",i); 
} 
int calculatefive(long long n)
{
	int i=0;
	while(n>=5)
	{
		n/=5;
		i+=n;
	}
	return i;
}
