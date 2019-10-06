#include<stdio.h>
void main ()
{
	int m ,i,j;
	printf("Enter the size of array : ");
	scanf ("%d",&m);
	int arr [100][100];
	for (i=0;i<m;i++)
	{
		for (j=0;j<m;j++)
		{
			printf("Enter the %d number : ",i+1);
			scanf ("%d",&arr[i][j]);
		}
	}
	printf("\n\tMATRIX\n\n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<m;j++)
		{
			printf("%d  ",arr[i][j]);
		}
			printf ("\n");
	}
	printf("\n\tTRANSFORM\n\n");
	for (i=m-1;i>=0;i--)
	{
		for (j=m-1;j>=0;j--)
		{
			printf("%d  ",arr[i][j]);
		}
		printf ("\n");
	}
}
