#include<stdio.h>
void main()
{
	int N,M,K,i,j,k=0;
	scanf("%d %d %d",&N,&M,&K);
	int P[N][M],prod[1000]={0};
	for (i=0;i<N;i++)
	{
		for (j=0;j<M;j++)
		scanf("%d",&P[i][j]);
	}
	for (i=0;i<N;i++)
	{
		for (j=0;j<M;j++)
		{
			prod[k]=prod[k]+P[i][j];
			printf("\t%d",prod[k]);
		}
		k++;
	}
	int l;
	for (i=0;i<M;i++)
	{
		for (j=0;j<N;j++)
		{
			prod[k]=prod[k]+P[j][i];
		}	
		k++;
	}
	int sum=1 ;
	for (i=0;i<k;i++)
	{
		sum=sum*prod[i];
	}
	printf("\n%d",sum);
}
