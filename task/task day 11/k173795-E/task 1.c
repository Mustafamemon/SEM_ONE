#include<stdio.h>
#include <stdlib.h>
int **input (int row ,int col)
{	
	int i,j;
	int **mat=(int **)calloc(sizeof(int*),row );
	for (i = 0; i < row; i++)
	*(mat+i) = (int *)calloc(sizeof(int),col);
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the element of %d row and %d col ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	return mat;
}
int **trans(int **ptr,int row, int col)
{
	int i,j;
	int **mat=(int **)calloc(sizeof(int*),col);
	for (i = 0; i < col; i++)
	*(mat+i) = (int *)calloc(sizeof(int),row);
	for (i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			mat[i][j]=ptr[j][i];
		}
	}
	return mat;
}
void diplay(int **ptr1,int **ptr2 ,int row ,int col)
{
	int i,j ;
	printf("\nMATRIX\n");
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		printf("\t%d ",ptr2[i][j]);
		printf("\n\n");
	}
	printf("\nTRANSPOSE MATRIX\n");
	for (i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		printf("\t%d ",ptr1[i][j]);
		printf("\n\n");
	}
}
int main ()
{
	int i,j,row,col;
	printf("Enter the number of rows ");
	scanf("%d",&row);
	printf("Enter the number of col ");
	scanf("%d",&col);
	int **ptr=input (row,col);
	int **ptr1=trans(ptr,row,col);
	diplay(ptr1,ptr,row,col);
	free(ptr);
	free(ptr1);
	return 0 ;
}

