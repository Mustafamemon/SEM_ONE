#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int **ptr1 , **ptr2 , m , n , i ,j;
	printf("Row & Col\n");
	scanf("%d %d",&m,&n);
	ptr1=(int**)calloc(m,sizeof(int *));
	ptr2=(int**)calloc(m,sizeof(int *));
	printf("\n\tA\n");
	for (i=0;i<m;i++)
	{
		ptr1[i]=(int *)calloc(n,sizeof(int));
		for (j=0;j<n;j++)
		{
			printf("(%d,%d) : ",i+1,j+1);
			scanf("%d",&ptr1[i][j]);
		}
	}
	printf("\n\tB\n");
	for (i=0;i<m;i++)
	{
		ptr2[i]=(int *)calloc(n,sizeof(int));
		for (j=0;j<n;j++)
		{
			printf("(%d,%d) : ",i+1,j+1);
			scanf("%d",&ptr2[i][j]);
		}
	}
	int m1,m2 ,temp[n];
	printf("ENTER THE ROW OF A MAT\n");
	scanf("%d",&m1); 
	printf("ENTER THE ROW OF B MAT\n");
	scanf("%d",&m2);
	m1--;
	m2--;
	for (j=0;j<n;j++)
	{
		temp[j]=ptr2[m2][j];
	}
	for (j=0;j<n;j++)
	{
		ptr2[m2][j]=ptr1[m1][j] ;
		ptr1[m1][j]=temp[j];	
	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d\t",ptr1[i][j]);		
		}
		printf("\n");
	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d\t",ptr2[i][j]);		
		}
		printf("\n");
	}
}	
