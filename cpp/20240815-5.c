#include <stdio.h>
int main()
{
	int a;//变量表：变量名称，变量地址；
	int *addr_a;//保存a的地址
	int *p; 
	int b[5]={1,2,3,4,5};//5个元素的值在相邻空间保存 
	int *u=NULL;
	void *s;
	(int)s=&a; 
	float PI=3.14159;
	float *pi_addr;//星号作用：表示指针变量 
	int *b_addr; 
	a=100;
	addr_a=&a;
	p=addr_a;
	(*p)++;
	p=p+1;
	b_addr=b;
	pi_addr=&PI;
	printf("a=%d",a); 
	printf("a=%d",*addr_a); //*：表示某个指针地址的值;*addr_a相当于a 
	printf("\naddress=%d",addr_a);//addr_a相当于&a 
	printf("\naddress=%d",*p);
	printf("\naddress=%d",pi_addr); 
	printf("\n*b=%d",*b_addr);
	for(int i=0;i<5;i++)
		printf("\n*b=%d",*b_addr++);
}
