#include<stdio.h>
void main ()
{
	int i,j,row ;
	printf("Enter the row :");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for (j=1;j<=row-i;j++)
		printf("  ");
		for (j=1;j<=i;j++)
		printf("%c ",j+64);
		printf("\n\n");
	}
	for(i=row;i>=1;i--)
	{
		for (j=1;j<row;j++)
		printf("  ");
		for (j=1;j<=i;j++)
		printf("%c ",j+64);
		printf("\n\n");
	}
}
