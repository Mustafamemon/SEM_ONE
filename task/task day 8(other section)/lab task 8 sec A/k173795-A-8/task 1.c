#include<stdio.h>
void perf();
void main()
{
	int a,b ;
	printf("Enter the lower limit: ");
	scanf("%d",&a);
	printf("Enter the upper limit: ");
	scanf("%d",&b);
	perf(a,b);
}
void perf(int L , int U)
{
	int i,j,sum ;

	for (i=L;i<=U;i++)
	{
		sum=0;		
		for (j=1;j<i;j++)
		{
			if (i%j==0)
			{
				sum=sum+j;
			}			
		}
		if(i==sum)
			printf("\n%d",sum);
	}
}
