#include<stdio.h>
void main ()
{
	int n , i,j ,a;
	scanf("%d",&n);
	int num[n],arr[100]={0};
	for (i=0;i<n;i++)
	scanf("%d",&num[i]);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (num[i]==num[j])
			{
				arr[j]++;
			}
		}
	}
	/*	int k=0,a[100]={0};
	for (i=0;i<n;i++)
	{
		if (k<arr[i])
		{
			k=arr[i];
		}
	}
	printf("%d\n",k);
	int l=0;
	for (i=0;i<n;i++)
	{
		printf("	%d\n",arr[i]);
		if (k==arr[i])
		{
			l++;
			a[l]=i;
		}	
	}
	for (i=1;i<=l;i++)
	printf("%d\n",num[a[i]]);*/
}
