#include<stdio.h>
int main ()
{
	int a , b  = 0 ;
	printf("enter two integers a and b :\n");
	scanf("%d %d", &a, &b);
	printf("Numbers before Interchange a= %d b= %d ",a ,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nNumber after Interchange a= %d b= %d",a ,b);
	return 0 ;
}
