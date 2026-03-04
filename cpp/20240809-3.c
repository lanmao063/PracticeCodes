#include<stdio.h>
#include<math.h> 
int main()
{
	float a,b,c,delte,x,x1,x2; 
	printf("输入系数："); 
	scanf("%f %f %f",&a,&b,&c);
	if(a==0)
	{
		printf("此方程并非一元二次方程"); 
	}
	else
		{
		delte=b*b-4*a*c;
		if(delte==0)
		{
			x=-b/2*a;
			printf("方程有两个相等实根x=%f",x); 
		}
		else
			if(delte>0)
			{
					x1=-b+sqrt(b*b-4*a*c)/2*a;
					x2=-b-sqrt(b*b-4*a*c)/2*a;
				printf("方程有两个不相等实根\nx1=%f\nx2=%f",x1,x2);
			}
			else	
				printf("方程无实根");	
		}		
}
