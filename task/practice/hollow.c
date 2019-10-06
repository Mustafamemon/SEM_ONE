#include<stdio.h>
void main ()
{
	int row ,i,j,k;
	printf("Enter the row :");
	scanf("%d",&row);
	for (i=0;i<=row-1;i++)
	{
		for (j=1;j<=row-i;j++)
		if (i==0 && j==row-i);
		else
		printf("%d",j);
		for(k=1;k<=(2*i)-1;k++)
		printf(" ");
		for (j=row-i;j>=1;j--)
		printf("%d",j);
		printf("\n");
	}
	for (i=row-2;i>=0;i--)
	{
		for (j=1;j<=row-i;j++)
		if (i==0 && j==row-i);
		else
		printf("%d",j);
		for(k=1;k<=(2*i)-1;k++)
		printf(" ");
		for (j=row-i;j>=1;j--)
		printf("%d",j);
		printf("\n");
		
	}
}
