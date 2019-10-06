#include<stdio.h>
void main ()
{
	int num,i=0;
	printf("Enter the number ");
	scanf("%d",&num);
	if (num>1)
	{
	printf("Initial value is %d\n",num);
	while (num!=1)
	{
		i++;
	if (num%2==0)
	num=num/2;
	else
	num=(num*3)+1;
	printf("Next Value is %d\n",num)	;
	}
	printf("Final value is %d , number of steps %d",num,i);	
	}
	else
	printf("Error");
}
