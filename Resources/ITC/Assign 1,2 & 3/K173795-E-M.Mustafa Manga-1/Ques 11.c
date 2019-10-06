#include<stdio.h>
void main ()
{
	int num[5],i,x,j;
	for(i=0;i<5;i++)
	{
		printf("Enter the %d number ",i+1);
		scanf("%d",&num[i]);
	}
	for (i=0;i<=4;i++)
	{
		for  (j=0;j<=4;j++)
		{
			if (num[j]>num[j+1])
			{
				x=num[j];
				num[j]=num[j+1];
				num[j+1]=x;
			}
		}
	}
	printf("Ascending\n");
	for (i=0;i<=4;i++)
	printf("%d\n",num[i]);
	printf("Descending\n");
	for (i=4;i>=0;i--)
	printf("%d\n",num[i]);
	
}
