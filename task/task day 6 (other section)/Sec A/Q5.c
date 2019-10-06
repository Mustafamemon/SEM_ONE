#include<stdio.h>
#include<conio.h>
int main()
{
	int a = 0 , b = 0 ;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	if(a==b)
	{
		printf("Given Numbers are Equal");
	}
	else
	if(a!=b)
	{
		printf("Given Numbers are not Equal\n");
		if(a>b)
		{
			printf("First Number is Greater than Second\n")	;
		}
			else
		{
			printf("Second Number is Greater than First ")	;	
		}
	}
	getch();
}
