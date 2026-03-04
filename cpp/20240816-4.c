#include <stdio.h>
enum colorname{red,yellow,blue,green};//定义取值范围，定义域 
int main()
{
	enum colorname color;
	color=red;
//	color=white; 不行 
	printf("%d",color);
}
