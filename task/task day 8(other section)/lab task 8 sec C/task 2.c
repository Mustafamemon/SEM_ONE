#include<stdio.h>
int func();
void main ()
{
	int B,N,W,res,Tp;
	printf("The Number of Bolts  :   ");
	scanf("%d",&B);
	printf("The number of Nuts   :   ");
	scanf("%d",&N);
	printf("The number of washer :   ");
	scanf("%d",&W);
	res=func(B,W,N,Tp);
	printf("\nTotal Cost :   %d",res);
	
}
int func(int B, int W,int N,int Tp)
{
	if (N==B && W>=(2*N) )
	printf("\n\nCheck the order: Order is Ok");
	else
	{
		if (N==B || W<(2*N))
	printf("\n\nCheck the order: too few washer");
	if (N<B || W==(2*B))
	printf("\n\nCheck the order: too few Nuts");
	if (B<N || W==(2*N))
	printf("\n\nCheck the order: too few Bolts");
	}
	Tp = (5*B)+(3*N)+W ;
	return Tp;
}

