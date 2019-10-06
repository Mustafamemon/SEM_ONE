#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int **ptr ,n,n1,i,m,j,m1,sum=0;
	printf("Enter the size of Matrix A ");
	scanf("%d %d",&m,&n);
	printf("Enter the size of Matrix B ");
	scanf("%d %d",&m1,&n1);
	ptr=(int **)calloc(m,sizeof(int));
	for  (i=0;i<m;i++)
	*(ptr+i)=(int *)calloc(n,sizeof(int));
	int **ptr1=(int **)calloc(m1,sizeof(int));
	for  (i=0;i<m1;i++)
	*(ptr1+i)=(int *)calloc(n1,sizeof(int));
	int **arr=(int **)calloc(m,sizeof(int));
	for  (i=0;i<m1;i++)
	*(arr+i)=(int *)calloc(n1,sizeof(int));
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter Element of matrix A (%d,%d):",i+1,j+1);
			scanf("%d",&ptr[i][j]);
		}
	}
	for (i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("Enter Element of matrix B (%d,%d):",i+1,j+1);
			scanf("%d",&ptr1[i][j]);
		}
	}
	if (m==m1 && n==n1)
	{
		printf("ADDITION\n");
		for (i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
				printf("%d ",(ptr[i][j]+ptr1[i][j]));
		printf("\n");
		}
	}
	else
	printf("\n\t\tAddtion is not possible\n");
	int g=0 ;
	if (n==m1)
	{
		for (g=0;g<m;g++)
		{
		for (i=0;i<n1;i++)
		{
			for (j=0;j<m;j++)
			{
			sum=sum+(ptr[g][j]*ptr1[j][i]);
			}
			arr[g][i]=sum;
			sum=0 ;			
		}		
		}
		printf("\n\t\tMULTIPLICATION\n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n1;j++)
		printf("%d	",arr[i][j]);
		printf("\n");
	}
}
	else 
		printf("Matrices with entered orders can't be multiplied with each other.");
	}


