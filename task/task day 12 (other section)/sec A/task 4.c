#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int **ptr,n ,i,j,x=0,flag=1;
	printf("ENTER THE NUMBER ");
	scanf("%d",&n);
	ptr=(int **)calloc(n,sizeof(int*));
	for (i=0;i<n;i++)
	{
		*(ptr+i)=(int *)calloc(n,sizeof(int));
		for (j=0;j<n;j++)
		{
			printf("ENTER THE ELEMENT OF ARRAY A (%d,%d) : ",i+1,j+1);
			scanf("%d",&ptr[i][j]);
		}
	}
	for (i=0;i<n;i++)
	{
		x++ ;
		for (j=x;j<n;j++)
		{
			if  (ptr[i][j]==0)
			{
				flag=0 ;
			}
			else
			{
				flag=1 ;
				break ;
			}
		}
	/*	if (flag==1)
		{
			break ;
		}*/
	}
	if (flag==0)
	printf("lower triangular matrix");
	else
	printf("Not lower triangular matrix");
}
