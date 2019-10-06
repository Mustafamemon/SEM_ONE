#include<stdio.h>
void main()
{
	int row,  k, i, j;
	printf("Enter a  rows:\n");
	scanf("%d", &row);
	row=(2*row)+3;
	for (i=1 ;  i<=row ; i++)
	{
		for (j=1;j<=row;j++)
	{
		if(i==1 || j==1 || j==row || i==row || i==(row+1)/2)
		printf("*");
		else 
		printf(" ");
	}	
	printf("\n");
	}
}
	
