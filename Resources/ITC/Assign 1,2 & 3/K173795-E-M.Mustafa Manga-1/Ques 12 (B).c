#include<stdio.h>
void main ()
{
	int i,n=0,num[n],key,j;
	printf("How many number you want to enter ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Enter the number at %d location ",i+1);
		scanf("%d",&num[i]);	
	}
	printf("Enter the you want to find : ");
	scanf("%d",&key);
	for (j=0;j<n;j++)
	{
		printf("key doest not exist ");
		if (key==num[i])
		{
			printf("Yes,key exist at %d loction",i+1);
		}
	}
}

