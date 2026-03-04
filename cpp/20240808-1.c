//if(gender=='男' && age>=22) //与运算符（两个都需要满足） 
//if(gender=='男' || age>=22) //或运算符 （一个满足即可） 
//if(gender=='男' !) //非运算符 （取反集） 
#include <stdio.h>
int main()
{
	float x,y;
	scanf("%f",&x);
	if(x<=-10)
		y=2*x;
	else
		if(x<=0)
			y=2+x;
		else
			if(x<=10)
				y=x-2;
			else
				y=x/10;
	printf("%f",y);
}
