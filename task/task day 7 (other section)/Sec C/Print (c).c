#include<stdio.h>
void main ()
{
	int N,i ,k ;
	printf("Enter the N value :");
	scanf("%d",&N);
	for(i=0; i<N;i++)
	{
		for(k=1;k<=i;k++)
		printf(" . ");
		for(k=N;k>i;k--)
		printf(" * ");
		printf("\n");
	}
}
