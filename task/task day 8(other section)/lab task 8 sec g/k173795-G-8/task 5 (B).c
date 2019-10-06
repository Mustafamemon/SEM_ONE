#include<stdio.h>
void func();
void main ()
{
	int a;
	printf("Enter the row :");
	scanf("%d",&a);
	func (a);
}
void func (row)
{
 	int i,j ;
 	for(i=row+1;i>=1;i--)
	{
		for (j=1;j<=i;j++)
		printf("o ");
		for (j=row+1;j>=i;j--)
		printf(". ");
		printf("\n");
	} 
	for(i=2;i<=row+1;i++)
	{
		for (j=1;j<=i;j++)
		printf("o ");
		for (j=row+1;j>=i;j--)
		printf(". ");
		printf("\n");
	} 
}

