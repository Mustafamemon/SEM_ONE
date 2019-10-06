#include<stdio.h>
#include<stdlib.h>
void func(int *ptr ,int *ptr1)
{
	int rem[100]={0},rem1[100]={0} , i=0, j=0,temp2=*ptr , temp1=*ptr1;
	while (ptr[0]!=0)
	{
		rem[i]=(ptr[0]%10);
		ptr[0]/=10;
		i++;
	}
	while (ptr1[0]!=0)
	{
		rem1[j]=(ptr1[0]%10);
		ptr1[0]/=10;
		j++;
	}
	int k,l;
	for (k=i-1;k>=0;k--)
	printf(" %d",rem[k]);
	int a=i-j;
	printf("\nx ");
	for (l=0;l<a;l++)
	printf("  ");
	printf("\b");
	for (l=j-1;l>=0;l--)
	printf("%d ",rem1[l]);
	int prod=0,rem3=0,temp;
	printf("\n");
	for (l=0;l<=i;l++)
	printf("--");
	printf("\n");
	int t[10][100]={0},g =0 ;
	for (k=0;k<j;k++)
	{
		g=0;
		for (l=0;l<=i;l++)
		{
			prod=rem3+(rem1[k]*rem[l]);
			if (prod>9)
			{
				t[k][g]=prod%10;
				rem3=prod/10;
			}
			else
			{
				t[k][g]=prod;
				rem3=0;	
			}
			g++;
		}
	}
	for (k=0;k<j;k++)
	{
		for (l=i;l>=0;l--)
		{
			printf("%d ",t[k][l]);
		}
		printf("\n");
	}
	for (l=0;l<=i;l++)
	printf("--");
	int rem4 ;
	if (j>=2)
	{
		temp=temp1*temp2;
		temp1=0 ; temp2=0 ;
		while (temp!=0)
		{
			temp2=(temp%10);
			temp/=10 ;
			temp1=(temp1*10)+temp2 ;
		}
		printf("\n");
		temp=temp1;
		while (temp!=0)
		{
			printf("%d ",temp%10);
			temp/=10 ;
		}
		printf("\n");
		for (l=0;l<=i;l++)
		printf("--");	
	}
}	
void main ()
{
	int *ptr , *ptr1 , i = 0 , j = 0 ;
	ptr=(int *)malloc(sizeof(int));
	scanf("%d",&ptr[0]);
	ptr1=(int *)malloc(sizeof(int));
	scanf("%d",&ptr1[0]);
	func(ptr,ptr1);
}

