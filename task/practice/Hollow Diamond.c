#include<stdio.h>
void main()
{
	int row,  k, i, j;
	printf("Enter a  rows:\n");
	scanf("%d", &row);
	for (i =1; i <row-1; i++)
	{
		for(j=1;j<=row-i;j++)
		printf("%d",i);
		for (k=2;k<=(2*i)-1;k++)
		printf(" ");
		for(j=1;j<=row-i;j++)
		printf("%d",i);
		printf("\n");
	}
	
	for (i=row-1;i>=1;i--)
	{
		for (j=1;j<=row-i;j++)
		printf("%d",i);
		for (k=2;k<=(2*i)-1;k++)
		printf(" ");
		for (j=1;j<=row-i;j++)
		printf("%d",i);
		printf("\n");
	}

}
