#include<stdio.h>
void main ()
{
	int i,j,row,col,row2,row1,n=0;
	printf("Enter the number of rows ");
	scanf("%d",&row);
	printf("Enter the number of rows ");
	scanf("%d",&col);
	int mat[row][col],mat1[row][col],temp[col],mat3[row][col];
	printf(" %d matrice\n",n);
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the element of %d row and %d col ",i+1,j+1);
			scanf("%d",&mat[i][j]);
			mat3[i][j]=mat[i][j];
		}
	}
	printf("\n\n");
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the element of %d row and %d col ",i+1,j+1);
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the 2 row which you want to interchange ");
	scanf("%d %d",&row1,&row2);
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if (i==(row2-1))
			{
				temp[j]=mat1[i][j];
				mat[i][j]=temp[j];					
			}
			if (i==(row1-1))
			{
				temp[j]=mat3[i][j];
				mat1[i][j]=temp[j];					
			}
		}
	}
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the element of %d row and %d col is %d\n",i+1,j+1,mat[i][j]);
		}
	}
	printf("\n\n");
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the element of %d row and %d col is %d\n",i+1,j+1,mat1[i][j]);
		}
	}
}

