#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int *ptr,n ,i,x=0,avg=0;
	printf("ENTER THE NUMBER ");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	for (i=0;i<n;i++)
	printf("%d	",*(ptr+i));
	printf("\n\n");
	for (i=0;i<n;i++)
	{
		if (x<*(ptr+i))
		x=*(ptr+i);
	}
	printf("Largest = %d ",x);
	printf("\n\n");
	for (i=0;i<n;i++)
	{
		if (x>*(ptr+i))
		x=*(ptr+i);
	}
	printf("Smallest = %d ",x);
	printf("\n\n");
	for (i=0;i<n;i++)
	{
		avg=avg+*(ptr+i);
	}
	printf("AVG = %.2f ",(float)avg/n);
	
}
