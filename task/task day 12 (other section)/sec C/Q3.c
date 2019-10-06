#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int **ptr ,n,n1,i,m,j,m1 ;
	printf("Enter the size of an Matrix : ");
	scanf("%d",&m);
	ptr=(int **)calloc(m,sizeof(int));
	for  (i=0;i<m;i++)
	*(ptr+i)=(int *)calloc(m,sizeof(int));
	for (i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Enter Element(%d,%d):",i+1,j+1);
			scanf("%d",&ptr[i][j]);
		}
	}
	int **ptr1,l=m-1,k=m-1;
	ptr1=(int **)calloc(m,sizeof(int));
	for  (i=0;i<m;i++)
	*(ptr1+i)=(int *)calloc(m,sizeof(int));
	for (i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			ptr1[i][j]=(ptr[k][l]+ptr[i][j]); l--;
		}
		l=m-1; k--;
	}
	for (i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",ptr1[i][j]);
		}
		printf("\n");
	}
}
	
