#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int n,m ,i,j,k,l,flag;
	printf("ENTER THE SIZE OF ARRAY : ");
	scanf("%d",&n);
	int **ptr ,**ptr1;
	ptr=(int **)malloc(n*sizeof (int*));
	for (i=0;i<n;i++)
	{
		*(ptr+i)=(int *)malloc(n*sizeof (int));
		for (j=0;j<n;j++)
		{
			printf("ENTER THE ELEMENT OF ARRAY A (%d,%d) : ",i+1,j+1);
			scanf("%d",(*(ptr+i))+j);
		}
	}
	ptr1=(int **)malloc(n*sizeof (int*));
	for (i=0;i<n;i++)
	{
		*(ptr1+i)=(int *)malloc(n*sizeof (int));
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			ptr1[i][j]=ptr[j][i];
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (ptr1[i][j]==ptr[i][j])
			{
				flag=0 ;
			}
			else
			{
				flag=1; break ;
			}
		}
		if (flag==1)
		break ;
	}
	if (flag==0)
		printf("SYMMETRIC");
	else
		printf("NOT SYMMETRIC");
	free(ptr);
	free(ptr1);
}
