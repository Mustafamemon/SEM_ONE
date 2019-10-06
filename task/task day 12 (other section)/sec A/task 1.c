#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int *ptr,n ,i,x=0;
	printf("ENTER THE NUMBER ");
	scanf("%d",&n);
	ptr=(int *)calloc(n,sizeof(int));
	for (i=0;i<n;i++)
	{
		printf("Enter %d Number : ",i+1);
		scanf("%d",(ptr+i));
	}
	for (i=0;i<n;i++)
	{
		if (x<*(ptr+i))
		x=*(ptr+i);
	}
	printf("Largest = %d ",x);
}
