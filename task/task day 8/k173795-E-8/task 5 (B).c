#include<stdio.h>
void heart();
void main ()
{
	int row ;
	printf("Enter the row :");
	scanf("%d",&row);
	heart (row);
}
void heart(row)
{
	int i,j,k,l;
	
	for (i=row/2;i<=row;i+=2)
	{
		for (j=1;j<row-i;j+=2)
		printf(" ");
		for (k=1;k<=i;k++)
		printf("*");
		for (j=1;j<=row-i;j++)
		printf(" ");
		for (k=1;k<=i;k++)
		printf("*");
	
		printf("\n");
	}
	for (i=row;i>=1;i--)
	{
		for (j=1;j<=row-i;j++)
		printf(" ");
		for (k=1;k<=(2*i)-1;k++)
		printf("*");
		printf("\n");
	}
	}

