#include<stdio.h>
void main()
{
	int row,  k, i, j;
	printf("Enter a  rows:\n");
	scanf("%d", &row);
//	row=(2*row)+1;
	for (i=2 ;  i<row ; i++)
	{
		for (j=0;j<=row-i;j++)
		printf(".");
		for (j=1;j<=i-1;j++)
		printf("o");
		printf("\n");	
	}
	for (i=row-2 ;  i>1 ; i--)
	{
		for (j=1;j<=row-i+1;j++)
		printf(".");
		for (j=1;j<=i-1;j++)
		printf("o");
		printf("\n");	
	}
}
