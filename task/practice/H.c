#include<stdio.h>
void main()
{
	int row,  k, i, j;
	printf("Enter a  rows:\n");
	scanf("%d", &row);
	row = 2*row+1;
	for (i=1; i<=row;i++)
	{
		for (j=1;j<=row;j++ )
	{	if (j==1|| j==row || i==(row+1)/2)
		printf("*");
		else 
		printf(" ");
	}
	printf("\n");
	}
}
