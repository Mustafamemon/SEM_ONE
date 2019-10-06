#include<stdio.h>
void main ()
{
	int num,i=0,sum[i],j,k=0,a,l;
	printf("Enter the number : ");
	scanf("%d",&num);
	a=num;
	int par[num];//={1};
	for (j=0;j<num;j++)
	{
	par[j]=1;
	printf("%d ",par[j]);
	}
	printf("\n");
	for (i=0;i<num-2;i++)
	{
		sum[i]=par[i]+par[i+1];
		par[i+1]=sum[i];
	//	printf ("\n%d",sum[i]);
		k++;
		for (j=k;j<num;j++)
		{
			printf ("%d ",par[j]);
		}
		printf("\n");	
	}
	for (l=0;l<=3;l++)
	{
		k=0;
		a=num;
	for (i=0;i<(num-(num/2))/2;i++)
	{
		sum[i]=par[i]+par[i+1];
		par[i+1]=sum[i];
	//	printf ("%d ",par[1]);
	}
	for (i=num-1;i>(num+(num/2))/2;i--)
	{
		sum[i]=par[i]+par[i-1];
		par[i-1]=sum[i];
	//	printf ("%d ",par[2]);
	}
	k++;
	a--;
	for (j=k;j<a;j++)
	{
		printf ("%d ",par[j]);
	}
	printf("\n");	
	}
}

