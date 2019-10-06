#include<stdio.h>
void main ()
{
	int mat[5][5],i,j,x=0;
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			printf("Enter the number of %d row and %d col  ",i+1,j+1);
			scanf("%d",&mat[i][j]);
			if (x<mat[i][j])
			x=mat[i][j];
		}
	}
	printf("The largest num is %d",x);
}
