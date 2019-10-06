#include<stdio.h>
#include"mymath.h"
int main ()
{
	int a,b;
	char c ;
	printf("Enter The First Number:",a);
	scanf("%d",&a);
	fflush(stdin);
	printf ("Which Operation do you wnat perform :");
	scanf("%c",&c);
	printf("Enter The Second Number:",b);
	scanf("%d",&b);	
	switch (c)
	{
	case('+'):
	printf("%d %c %d = %d",a,c,b ,sum(a , b));
	break;	
	case('-'):
	printf("%d %c %d = %d",a,c,b, sub(a , b));
	break ;
	case ('*'):
	printf("%d %c %d = %d",a,c,b, prod(a , b));
	break ;
	case('/'):
	printf("%d %c %d = %.3f",a,c,b, div( a , b));
	break;
	}
}
