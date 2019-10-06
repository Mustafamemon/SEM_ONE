#include<stdio.h>
void main ()
{
	int num,prod=1,j,i=1,k=1;
	printf("Enter the num :");
	scanf("%d",&num);
	while (i!=num)
	{
		k++;
		for (j=2;j<k;j++)
	{
		if (k%j==0)
		{
			break;
		}
	}
	if (k==j)
	{
		prod=prod*k ;
		i++;
	}
	}
	prod=prod+1;
	for (j=2;j<prod;j++)
{
	if (prod%j==0)
	{
		break;
	}
}
	if (prod==j)
	{
	printf("Yes! %d is a prime number",prod);		
	}
}
