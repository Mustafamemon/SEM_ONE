#include<stdio.h>
#include<conio.h>
int main()
{
	int age ;
	printf("Enter the age :");
	scanf("%d",&age);
	if (age<11)
	{
		printf("The Fare is : Rs 20");
	}
	else
	if (age>=11&&age<64)
	{
		printf("The Fare is : Rs 50");
	}
	else
	if (age>=65)
	{
		printf("The Fare is : Rs 30");
	}
getch();
}
