#include<stdio.h>
void main ()
{
	int num,rem=0,prod=0,rev , sum=0,i,a=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	prod=num;
	while (prod!=0)
	{
		i=0;
	while(i!=3)
	{
		i++;
		rev=prod%10;
		prod=prod/10;
		sum=(sum*10)+rev;
		a=(a*10)+rev;
		
	}
	sum=0;	
	}
	while (a!=0)
	{
		i=0;
	while (i!=3)
	{
		i++;
		rem=a%10;
		a=a/10;
		prod=(prod*10)+rem;
	}
	printf("%d,",prod);	
	prod=0;
	}
	printf("\b ");
	
}
