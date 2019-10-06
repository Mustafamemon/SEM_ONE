
#include<stdio.h>
void main ()
{
	int num , sum=0;
	printf("Enter a Postive integer :");
	do
	{
		scanf("%d",&num);
		if(num<0)
		{
			printf("Invalid number\n");
		}
		else if(num%2==0)
		sum = sum +num ;
	}
	while(num!=0);
	printf("sum=%d",sum);
}
