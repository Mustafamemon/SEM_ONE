#include<stdio.h>
int main ()
{
	int i ,num[5],mid,lb,ub,n;
	for (i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	scanf("%d",&n);
	lb=0;
	ub=5;
	mid=(lb+ub)/2 ;
	while (num[mid]!=n);
	{
			printf("%d",num[mid]);
	if (num[mid]>mid)
	{
		ub=mid;
		mid=(lb+ub)/2 ;
	}
	else
	{
		lb=mid;
		mid=(lb+ub)/2 ;
	}
	}
	printf("%d",mid+1);
}
