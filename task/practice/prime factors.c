#include<stdio.h>
void main ()
{
	int num ,i;
	printf("Enter the num :");
	scanf("%d",&num);
	for (i=2;i<=num;i++)
	{
		if (num%i==0)
		{
			num=num/i;
			printf("%d\n",i);
			i=2;
		}
	}
	
}
