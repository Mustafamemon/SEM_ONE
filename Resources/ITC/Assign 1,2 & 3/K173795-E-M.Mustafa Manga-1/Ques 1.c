#include<stdio.h>
void main ()
{
	int num1,num2;
	printf("Enter the 1st number ");
	scanf("%d",&num1);
	printf("Enter the 2nd number ");
	scanf("%d",&num2);
	printf("Sum = %d\nAvg = %f\nSum of Square = %d",num1+num2,(float)( num1+num2)/2,(num1*num1)+(num2*num2));
}

