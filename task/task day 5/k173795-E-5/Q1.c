#include<stdio.h>
int main()
{
	int a=0 ;
	float x, y ;
	printf("enter the value in km ");
	scanf("%d", &a);
	x= (float)a/1.6 ;
	printf("Value in miles : %.5f", x);
	y=(float)a*1093.61;
	printf("\nValue in yards : %.5f",y);
	return 0 ;
}
