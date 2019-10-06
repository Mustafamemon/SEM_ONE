#include<stdio.h>
void main ()
{
	int m ,i,j;
	scanf ("%d",&m);
	int arr [100][100];
	for (i=0;i<m;i++)
	{
		for (j=0;j<m;j++)
		scanf ("%d",&arr[i][j]);
	}
	int arr1[100][100],k=m-1,l=m-1;
	for (i=0;i<m;i++)
	{
		for (j=0;j<m;j++)
		{
			arr1[i][j]=arr[k][l];
			l--;
		//	printf("%d ",arr[k]
		}
		k--;
		l=m-1;
	}
	for (i=0;i<m;i++)
	{
		printf("\n");
		for (j=0;j<m;j++)
		{
			printf ("%d ",arr1[i][j]);
		}
	}
}
	