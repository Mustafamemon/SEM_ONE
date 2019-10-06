#include<stdio.h>
void main()
{
	int row,  k, i, j;
	printf("Enter a  rows:\n");
	scanf("%d", &row);
	row = 2*row+3;
	for (i=1; i<=row-i+1;i++)
	{
		for (j=1;j<=row;j++ )
	{	if (j==1|| j==row||i==j || j==(row-i+1))
		printf("*");
		else
		printf(" ");
	}
	printf("\n");	
}
}


