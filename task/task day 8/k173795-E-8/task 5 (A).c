#include<stdio.h>
void arrow(int row);
void main ()
{
	int row;
	printf("Enter the row :");
	scanf("%d",&row);
    arrow(row);	
}
void arrow(int row)
{
	int i,j ;
	
	row = ((2*row)+1) ;
	for (i=1 ; i<=(row+1)/2;i++)
	{
		for (j=1;j<=i;j++)
		printf(".");
		printf("\n");
	}
	for (i=(row-1)/2 ; i>=1;i--)
	{
		for (j=1;j<=i;j++)
		printf(".");
		printf("\n");
	}
	
}
