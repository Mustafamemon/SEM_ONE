#include<stdio.h>
void swap();
void main ()
{
	int n,l=0,*ptr,i,x,max,a,b;
	printf("How many number you want to enter ");
	scanf("%d",&n);
	int num[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	ptr=num;
	for (i=0;i<n;i++)
	{
		for (l=0;l<n-1;l++)
		{
			if (*(ptr+i)>*(ptr+l))
			{
			x=*(ptr+i);
			*(ptr+i)=*(ptr+l);
			*(ptr+l)=x;	
			}
		}
	}
	for (i=n-1;i>=0;i--)
	{
		printf("%d	",*(ptr+i));
	}
	printf("\nmaximum= %d",*(ptr));
	printf("\n");
	for (i=0;i<=n-1;i++)
	{
		printf("%d	",*(ptr+i));
	}
	scanf("%d %d",&a,&b);
	printf("\n");
	swap(&a,&b);
}
void swap (int *a ,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	printf("%d %d",*a,*b);
}
