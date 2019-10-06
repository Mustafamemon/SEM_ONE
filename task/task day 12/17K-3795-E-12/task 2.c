#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int n ,i,j,k,l;
	printf("ENTER THE SIZE OF ARRAY : ");
	scanf("%d",&n);
	int **ptr ,**ptr1;
	ptr=(int **)malloc(n*sizeof (int*));
	for (i=0;i<n;i++)
	{
		*(ptr+i)=(int *)malloc(n*sizeof (int));
		for (j=0;j<n;j++)
		{
			printf("ENTER THE ELEMENT OF ARRAY A (%d,%d)",i+1,j+1);
			scanf("%d",(*(ptr+i))+j);
		}
	}
	ptr1=(int **)malloc(n*sizeof (int*));
	for (i=0;i<n;i++)
	{
		*(ptr1+i)=(int *)malloc(n*sizeof (int));
	}
	k=n-1; 
	l=n-1;
	for (i=0;i<n;i++)
	{
		l=n-1;
		for (j=0;j<n;j++)
		{
			ptr1[i][j]=(ptr[i][j]+ptr[k][l]);
			l--;
		}
		k--;
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d ",ptr1[i][j]);
		}
		printf("\n");
	}
	free(ptr);
	free(ptr1);
}
