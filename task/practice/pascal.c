#include<stdio.h>
void main()
{
	int N,i,j,k,n ;
	printf("Enter the Number \n");
	scanf("%d",&N);
	for (i=0;i<=N;i++)
	{
		for (j=0;j<=N-i;j++)
		printf (" ");
		n=1;
		for (k=0;k<=i;k++)
	{
		printf (" %d",n);
		n=(n*(i-k))/(k+1);
		}	
		printf ("\n");
	}
}
