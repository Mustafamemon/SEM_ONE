#include<stdio.h>
void main ()
{
	int num,i,j,k,mid;
	scanf("%d",&num);
	int arr[num],larr[num/2],rarr[num/2];
	for (i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);;
	}
	mid=num/2;	
	while (mid>1)
	{
	for (j=0;j<mid;j++)
	{
		larr[j]=arr[j];
		rarr[j]=larr[mid+j];
	}
		mid=mid/2;
	}
	for (j=0;j<mid;j++)
	{
		printf("%d\n",larr[j]);
	}
for (j=0;j<mid;j++)
	{
		printf("%d",rarr[j]);
	}
	
}
