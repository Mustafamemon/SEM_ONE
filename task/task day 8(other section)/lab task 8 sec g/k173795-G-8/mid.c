#include<stdio.h>
void main ()
{
	int num,i;
	printf("Enter the  number :");
	scanf("%d",&num);
	for (i=2;i<=num;i++)
	{
		if (i%2==0)
		printf("%d%%2==0 %d is even number\n",i,i);
	}
	printf("\nx-----x\n\n");
	for (i=2;i<=num;i++)
	{
		if (i%2!=0)
		printf("%d%%2!=0 %d is odd number\n",i,i);
	}
}
