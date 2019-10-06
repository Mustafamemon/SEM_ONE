#include<stdio.h>
void main ()
{
	int N,i ,j,k,l ;
	printf("Enter the ex-N value :\n");
	scanf("%d",&N);
	k=(N+1);
	for (i=1;i<=N;i++)
	{
	//	printf("\n");
		for (j=1;j<=N+1;j++)
		{
		if(j==k)
		printf ("%d",i);
		else if (j%i==0 || i%j==0)
		printf("* "); 
		else 
		printf("  ");
		}
		printf("\n");
	}
	
}
