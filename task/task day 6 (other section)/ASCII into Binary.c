#include<stdio.h>
void main ()
{
	char ch ;
	int a , rem, i=0;
	printf("enter the character :");
	scanf("%c",&ch);
	a=(int)ch;
	printf("ASCII code of give Charcter is %d\n",a);
	printf("The Binary code of give Charcter is : ");
	while(a!=0)
	{ 
	rem=a%2;
	a=a/2;
	printf("%d",rem);
	}
	
}
