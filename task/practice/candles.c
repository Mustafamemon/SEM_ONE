#include<stdio.h>
void main ()
{
	int arr[100],i,n,x=0,j=0;
	scanf("%d",&n);
	for  (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if (x<arr[i])
		x=arr[i];
	}
	for  (i=0;i<n;i++)
	{
		if (x==arr[i])
		j++;
	}
	printf("%d",j);
}
