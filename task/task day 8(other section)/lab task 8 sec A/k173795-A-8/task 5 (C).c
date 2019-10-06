#include<stdio.h>
void func ();
void main ()
{
	int row ;
	printf("Enter the row :");
	scanf("%d",&row);
	func(row);
}
void func (row)
{
	int i,j ;
	for (i=1;i<=row;i++)
	{
		for (j=1;j<=row;j++)
		if (i==1 || j==1 || i==row || j==row)
		printf("*");
		else 
		printf(" ");
		printf("\n");
	}
	
	
}
