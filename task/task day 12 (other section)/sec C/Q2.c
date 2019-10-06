#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int **ptr ,n,n1,i,m,j,m1 ;
	printf("Enter the size of an Matrix A ");
	scanf("%d %d",&m,&n);
	printf("Enter the size of an Matrix in which you want to matrix B ");
	scanf("%d %d",&m1,&n1);
	ptr=(int **)calloc(m,sizeof(int));
	for  (i=0;i<m;i++)
	*(ptr+i)=(int *)calloc(n,sizeof(int));
	int **ptr1=(int **)calloc(m1,sizeof(int));
	for  (i=0;i<m1;i++)
	*(ptr1+i)=(int *)calloc(n1,sizeof(int));
	if ((m*n)<=(m1*n1))
	{
		for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("Enter Element(%d,%d):",i+1,j+1);
				scanf("%d",&ptr[i][j]);
			}
		}
	}
	else
	{
		for (i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				printf("Enter Element(%d,%d):",i+1,j+1);
				scanf("%d",&ptr1[i][j]);
		}
	}
	}
	if ((m*n)<=(m1*n1))
	{
		for (i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				ptr1[i][j]=ptr[i][j];
			}
		}	
	}
	else
	{
		for (i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				ptr[i][j]=ptr1[i][j];
			}
		}	
	}
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",ptr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%d ",ptr1[i][j]);
		}
		printf("\n");
	}		
}
