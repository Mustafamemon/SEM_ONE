#include<stdio.h>
#include<conio.h>
void main()
{
	char ch ;
	printf("Enter The Character :");
	scanf("%c",&ch);
	if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		printf("The Chracter is Vowel");
	}
	else 
	{
		printf("The Character is Consonant");
	}
}
