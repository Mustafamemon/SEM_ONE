#include<stdio.h>
void main ()
{
	int mat[4][4],a=0,i,k,j,max=0,flag=0,m=0;
	printf("enter the array\n");
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			if (max<mat[i][j])
			{
				max=mat[i][j];
				a=j;
			}
		}
		for (k=0;k<4;k++)
		{ 
			if (k!=i)
			{
			if (max<=mat[k][a])
			flag=1;
			else 
			{
			flag=0;
			break;	
			}
			}
		}
		if (flag==1)
		{
			m++;
			printf("%d %d\n",i+1,a+1);
		}
		max=0;
		a=0;
	}
	if  (m==0)
	printf("No Saddle point ");
	else
	printf("%d",m);
}

