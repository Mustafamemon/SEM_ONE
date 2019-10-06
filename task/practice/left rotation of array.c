#include<stdio.h>
void main ()
{
	int n , k ,i, j,temp;
	scanf("%d %d",&n,&k);
	int arr[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<(k%n);i++)
	{
		temp=arr[0];
		for (j=1;j<n;j++)
		{
			arr[j-1]=arr[j];
		}
		arr[n-1]=temp;
	}
	for (i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
