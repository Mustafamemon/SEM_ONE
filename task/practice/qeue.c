#include<stdio.h>
void main ()
{
	int arr[100],n,i,j,delt;
	printf("Enter\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Enter %d number\n",i+1);
		scanf("%d",&arr[i]);
	}
	int temp,k=0;
	for (i=0;i<n;i++)
	{
			for (j=0;j<n-1;j++)
			{
				if (arr[j]>arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
	}
	printf ("enter the number which you want to delt\n");
	scanf("%d",&delt);
		for (i=0;i<n;i++)
	{
		if (delt==arr[i])
		{
			k++;
			for (j=i;j<=n-1;j++)
			{
				arr[j]=arr[j+1];
			}
			i--;
		}
	}
	printf("%d\n",k);
	for (i=0;i<n-k;i++)
	{
		printf("%d ",arr[i]);
	}
}

	
	
	