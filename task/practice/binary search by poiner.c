#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int key ,n , *ptr, ub , lb , mid ,i=0 , j;
	ptr=(int *)calloc(1,sizeof(int));
	printf("%d number ",i+1);
	scanf("%d",&ptr[i]);
	char ch= 'Y' ;
	while (ptr[i]!=0)
	{
		i++;
		printf("%d number ",i+1);
		scanf("%d",&ptr[i]);
		ptr=(int *)realloc(ptr,(i+1)*sizeof(int));
	}
	printf("\nENTER THE KEY\n");
	scanf("%d",&key);
	lb=0 ;
	ub= i;
	mid = (lb+ub)/2 ;
	while (ptr[mid]!=key && lb<=ub)
	{
		if (ptr[mid]>key)
		{
			ub=mid-1;
			mid=(lb+ub)/2 ;
		}
		else
		{
			lb=mid+1;
			mid=(lb+ub)/2;
		}
	}
	if (ptr[mid]==key)
	printf("%d",mid+1);
}

