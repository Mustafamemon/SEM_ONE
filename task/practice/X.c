#include<stdio.h>
void main()
{
	int row,  k, i, j;
	printf("Enter a  rows:\n");
	scanf("%d", &row);
	for (i=1 ; i <= row;i++)
	{
		for (k=1;k<=row;k++)
		if (i==k || k==row-i+1)
		printf(" ");
		else 
		printf("*");
		printf("\n");
}
	
}
