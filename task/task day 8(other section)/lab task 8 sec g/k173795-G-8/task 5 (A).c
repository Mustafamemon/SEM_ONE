#include<stdio.h>
void func();
void main ()
{
	int row ;
	printf("Enter the row:");
	scanf("%d",&row);
	func(row);
}
void func(row)
{
	int i , j,k=0;
	for (i=1;i<=row;i++)
	{
		for (j=1;j<=i;j++)
		{
			k++;
		printf("%d ",k);
		}
		printf("\n");
	}
}
