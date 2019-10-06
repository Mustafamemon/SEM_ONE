#include<stdio.h>
void main ()
{
	int n=0,i,j,flag=0,k,l;
	printf("Enter the rows : ");
	scanf("%d",&n);
	int arr[n][n];
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);	
		}
	}
	for (k=0;k<n;k++)
	{
		for (l=0;l<n;l++)
	{	
		if (arr[k][l]==1)
		{	
			if (arr[k+2][l+1]==1 || arr[k+2][l-1]==1 || arr[k+1][l+2]==1 || arr[k-1][l+2]==1 )
			{
				flag=1;
				break;
			}	
		}
	}
	if (flag==1)
	break;
	}
	if (flag==0)
	printf("Valid");
	else 
	printf("Invalid");
}
