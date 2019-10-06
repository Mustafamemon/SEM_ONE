#include<stdio.h>
void main ()
{
	int i,n=0,num[n],key,lb=0,ub,mid,a;
	printf("How many number you want to enter ");
	scanf("%d",&n);
	ub=n-1;
	mid=lb+ub/2;
	for (i=0;i<n;i++)
	{
		printf("Enter the number at %d location ",i+1);
		scanf("%d",&num[i]);	
	}
	printf("Enter the you want to find : ");
	scanf("%d",&key);
	while (key!=num[mid] && lb<=ub)
	{
		if (key<num[mid])
		{
			ub=mid-1;
			mid=(lb+ub)/2;
		}
		else
		{
			lb=mid+1;
			mid=(lb+ub)/2;
		}
	}
	if (key==num[mid])
	printf("Yes, key exist at %d location",mid+1);
	else 
	printf("key not exist");
}
