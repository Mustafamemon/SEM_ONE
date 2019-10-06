#include<stdio.h>
void main ()
{
	int num[5],x,i,j;
	for (i=0;i<=4;i++)
	{
		printf("Enter %d ",i+1);
		scanf("%d",&num[i]);
	}	
	for (i=0;i<=4;i++)
	{
		for (j=0;j<=4;j++)
		{
			if (num[j]>num[j+1])
			{
			x=num[j];
			num[j]=num[j+1];
			num[j+1]=x;
		//	num[j]=num[j]+num[j+1];
		//	num[j+1]=num[j]-num[j+1];
		//	num[j]=num[j]-num[j+1];
			}
		}
	}
	for (i=0;i<=4;i++)
		printf("%d\n",num[i]);
}
