#include<stdio.h>
void main ()
{
	int i,j,row,col,row2,row1,n=0,a=0;
	printf("Enter the number of rows ");
	scanf("%d",&row);
	int mat[row][row],mat1[row][row],temp[row],mat3[row][row];
	printf(" %d matrice\n",n);
	for (i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("Enter the element of %d row and %d col ",i+1,j+1);
			scanf("%d",&mat[i][j]);
			mat3[i][j]=mat[i][j];
		}
	}
	printf("\n\n");
	for (i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("Enter the element of %d row and %d col ",i+1,j+1);
			scanf("%d",&mat1[i][j]);
		}
	}
	for (i=0;i<row;i++)
	{
		for(j=0;j<row;j++)
		{
			if (i==j)
			{
				if (mat[i][j]==1 && mat1[i][j]==1)	;
				else
				a=1;
			}
			else if (mat[i][j]==0 && mat[i][j]==0);
			else
			a=1;
		}
		if (a==1)
		{
			
		}
	}
	if (a==0)
	printf("identity");
}

