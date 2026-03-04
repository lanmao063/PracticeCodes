#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
	int random_number;     
	int m=0,n=0; 
	srand(time(NULL));
	for(int i=1;i++;i<10)
	{
		random_number = rand() % 1; 
		if(random_number<0.5)
		{
			printf("抽到的是R级角色\n");
			m++; 	
		}
		else
		{
			printf("抽到的是SSR级角色\n");
			n++; 	
		}
		printf("%d\n",random_number);
	}
	printf("%d",m/n);
}

