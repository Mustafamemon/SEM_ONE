#include<stdio.h>
void main ()
{
	int num1=0,num2=0,a[10]={0,1,2,3,4,5,6,7,8,9};
	printf("Enter the 1st number ");
	scanf("%d",&num1);
	if (num1!=a[10] )
	{
	printf("Enter the 2nd number ");
	scanf("%d",&num2);
	if (num2!=a[10] )
	{
	if (num1<num2)
	printf("Up");
	else if (num2<num1)
	printf("Down"); 
	else if (num1==num2)
	printf("Equal");
	}
	else
	printf("Error");
	}
	else
	printf("Error");
}
