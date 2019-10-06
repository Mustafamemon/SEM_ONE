#include<stdio.h>
void main ()
{
	int mat[6][6],mat1[6][6],i,j,x=0,k,l,add[6][6];
	for (i=0;i<6;i++)
	{
		for (j=0;j<6;j++)
		{
			printf("Enter the number of %d row and %d col  ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\n");
	for (i=0;i<6;i++)
	{
		for (j=0;j<6;j++)
		{
			printf("Enter the number of %d row and %d col  ",i+1,j+1);
			scanf("%d",&mat1[i][j]);
		}
	}
	for (i=0;i<6;i++)
	{
		for (j=0;j<6;j++)
		{
			add[i][j]=mat[i][j]+mat1[i][j];
			printf("the number of %d row and %d col %d\n",i+1,j+1,add[i][j]);
		}
	}
}
