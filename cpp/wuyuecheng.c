#include <stdio.h>
int max(int a,int b,int c);
int submax(int a,int b);
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",max(a,b,c));
}
int max(int a,int b,int c)
{
	int i;
	i=submax(a,b);
	return submax(i,c);
}
int submax(int a,int b)
{
	if(a>b) return a;
	else return b;	
}
