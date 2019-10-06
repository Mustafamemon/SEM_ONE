#include<stdio.h>
#include<conio.h>
void main()
{
	float a ,b ,Add, prod, sub, div;
	char ans ;
	printf("Enter Operator Do you Want To perform + , - , * , / :");
	scanf("%c",&ans);
	printf("Enter The First Number:");
	scanf("\n%f",&a);
	printf("Enter The First Number:");
	scanf("\n%f",&b);
	if (ans=='+')
	{
		Add=a+b ;
		printf("ans%f",Add);
	}
	else if (ans=='-')
	{
		sub=a-b ;
		printf("ans=%f",sub);
	}
	else if (ans=='*')
	{
		prod=a*b ;
		printf("ans=%f",prod);
	}
	else if (ans=='/')
	{
		div=a/b ;
		printf("ans=%f",div);
	}
}
