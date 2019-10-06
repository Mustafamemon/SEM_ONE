#include<stdio.h>
void main ()
{
	int N,P,cak=0,pro=0,T,i,j;
	int A[N];
	scanf("%d",&T);
	for (j=0;j<T;j++)
	{
		cak=0;pro=0;
	scanf ("%d %d",&N,&P);
	for (i=0 ;i<N;i++)
	scanf("%d",&A[i]);
	for (i=0;i<N;i++)
	{
		if (A[i]>=P/2)
		cak++;	
		else if(A[i>=P/10])
		pro++;
	}
	if (cak==1 && pro==2 )
	printf("yes");
	else
	printf("no");
	}
		
}
