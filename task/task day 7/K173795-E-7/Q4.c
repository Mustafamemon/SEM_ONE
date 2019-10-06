#include<stdio.h>
void main()
{
	int a,b,num,sum;
	printf("Enter The Number :");
	scanf("%d",&num);
	a=num%10;
	while (num!=0)
	{
		b=num;
		num=num/10;
	}
	sum = a +b ;
	printf("The sum of first and last digit is : %d",sum);
}
	
	
