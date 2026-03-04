#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
	float r,h;
	scanf("%f %f",&r,&h);
	float C1=2*PI*r;
	float Sa=PI*pow(r,2);
	float Sb=4*PI*pow(r,2);
	float Va=4*PI*pow(r,3)/3;
	float Vb=Sa*h;
	printf("C1=%.2f\nSa=%.2f\nSb=%.2f\nVa=%.2f\nVb=%.2f\n",C1,Sa,Sb,Va,Vb);
 } 
