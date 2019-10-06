#include<stdio.h>
#include<conio.h>
int main()
{
	char ch ;
	printf("Enter the character:");
	scanf("%c",&ch);
	if (ch>=65&&ch<=90)
	{
		printf("\nUpper Case");
	}
	else 
	if(ch>=97&&ch<=122)
	{
		printf("\nLower Case");	
	}
	else 
	if(ch>=48&&ch<=57)
	{
		printf("\nDigit");
	}
	else
	{
		printf("\nSpecial Character");
	}
	getch();
}
