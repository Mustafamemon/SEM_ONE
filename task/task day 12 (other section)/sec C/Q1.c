#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int *ptr ,n,n1,i ;
	printf("Enter the size of an array ");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	for (i=0;i<n;i++)
	{
		printf("Enter %d Element :",i+1);
		scanf("%d",&ptr[i]);
	}
	printf("How many Elements do you want to add more : ");
	scanf("%d",&n1);
	ptr=(int *)realloc(ptr,n1*sizeof(int));
	for (i=0;i<n1;i++)
	{
		printf("Enter %d Element :",i+n+1);
		scanf("%d",&ptr[n+i]);
	}
	printf("\t\tBefore Sorting\n");
	for (i=0;i<(n+n1);i++)
	printf("%d\n",ptr[i]);
	int temp,j;
	for (i=0;i<(n+n1);i++)
	{
		for (j=i+1;j<(n+n1);j++)
		{
			if (ptr[i]>ptr[j])	
			{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
	printf("\t\tAfter Sorting\n");
	for (i=0;i<(n+n1);i++)
	printf("%d\n",ptr[i]);	
}
