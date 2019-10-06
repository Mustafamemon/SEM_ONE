#include<stdio.h>
void main ()
{
	int N,i,j,prod;
	printf("Enter the number :");
	scanf("%d",&N);
	for (i=1;i<=N;i++)
	{
		for (j=1;j<=3;j++)
		prod= (i*i)*i;
			printf("\n%d",prod);
	}

	
}
