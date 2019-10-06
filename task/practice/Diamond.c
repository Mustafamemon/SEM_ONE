#include<stdio.h>
void main()
{
	int row,  k, i, j;
	printf("Enter a  rows:\n");
	scanf("%d", &row);
	for (i =1; i < row; i++)
	{
		for(k=1;k<=(row-i);k++)
		printf(" ");
		for (j=1;j<=(2*i)-1;j++)
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
