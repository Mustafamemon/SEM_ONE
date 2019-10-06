
#include<stdio.h>
void main ()
{
	int i,j,row,col;
	printf("Enter the number of rows ");
	scanf("%d",&row);
	printf("Enter the number of col ");
	scanf("%d",&col);
	int mat[row][col];
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the element of %d row and %d col ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\nMATRIX\n");
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		printf("	%d ",mat[i][j]);
		printf("\n\n");
	}
	
	printf("\nTranspose Matrix\n");
	for (i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		printf("	%d ",mat[j][i]);
		printf("\n\n");
	}
	
}
