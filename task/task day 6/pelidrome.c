#include<stdio.h>
#include<conio.h>
void main ()
{
	int num ,palindrome ,rem;
	printf("Enter The Number :");
	scanf("%d",&num);
	while (num!=0)
	{
		rem=num%10;
		num=num/10;
		palindrome=rem ;
		printf("%d",palindrome);
	}
}
