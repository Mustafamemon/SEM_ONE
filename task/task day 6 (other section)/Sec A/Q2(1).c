#include<stdio.h>
#include<conio.h>
int main()
{
	char ch ;
	printf("Enter the character:");
	scanf("%c",&ch);
	if (ch>='A'&&ch<='Z')
	{
		printf("\nUpper Case");
	}
	else 
	if(ch>='a'&&ch<='z')
	{
		printf("\nLower Case");	
	}
	else 
	if(ch>='0'&&ch<='9')
	{
		printf("\nDigit");
	}
	else
	{
		printf("\nSpecial Character");
	}
	getch();
}
