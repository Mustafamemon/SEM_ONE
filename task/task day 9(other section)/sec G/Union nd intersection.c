#include<stdio.h>
void main ()
{
	int A[5]={1,3,7,5,2},B[6]={1,6,3,2,5,7},i,C[11],j,a,flag=1,D[9],l=-1,k=-1;
	printf("AUB=");
	for (i=0;i<5;i++)
	{
		C[++k]=A[i];
	}
	for (i=0;i<6;i++)
	{
		for (j=0;j<5;j++)
		{
			if (B[i]==A[j])
			{
				D[++l]=B[i];
				flag=0;
				break;
			}
			if (flag==0)
			break;
		}
		if (flag==1)
		C[++k]=B[i];
		else
		flag=1;
	}
	for (i=0;i<k;i++)
	{
		for (j=0;j<k;j++)
		if (C[j]>C[j+1])
		{
			a=C[j];
			C[j]=C[j+1];
			C[j+1]=a;
		}	
	}
	for (i=0;i<l;i++)
	{
		for (j=0;j<l;j++)
		if (D[j]>D[j+1])
		{
			a=D[j];
			D[j]=D[j+1];
			D[j+1]=a;
		}	
	}
	for (i=0;i<=k;i++)
	{
		printf("%d ",C[i]);
	}
	printf("\nAintB=");
	for (i=0;i<=l;i++)
	{
		printf("%d ",D[i]);
	}
	
	
	
}
