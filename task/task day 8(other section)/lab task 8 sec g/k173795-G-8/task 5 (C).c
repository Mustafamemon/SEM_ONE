#include<stdio.h>
void func();
void main ()
{	int row,col ;
	printf("Enter he number of rows: ");
	scanf("%d",&row);
	printf("Enter the number of coloumn: ");
	scanf("%d",&col);
	func(row , col);
}
void func(row , col)
{
	int i,j,k=0;
	for(i=row;i>=1;i--)
	{
		k=row-i;
		for(j=1;j<i;j++)
		{
			k++;
			printf("%d",k);
		}
		for(j=col;j>=i;j--)
		{
			printf("%d",col);
		}
		printf("\n");
	}
		
	
		
	
}

