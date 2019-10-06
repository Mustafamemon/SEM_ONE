#include<stdio.h>
void tri(int row);
void main ()
{
	int a;
	printf("Enter the row :");
	scanf("%d",&a);
    tri(a);	
}
void tri(int row)
{
	int i,j ;
	for (i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
	{
		printf("%d",j);
	}	
		printf("\n");
	}
}
