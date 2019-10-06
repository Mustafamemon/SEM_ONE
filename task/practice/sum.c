#include<stdio.h>
void main ()
{
	int rem,n,prod=1,i=0,t,sum=0;
	printf("Enter the Value :");
	scanf("%d",&n);
	while (n>10)
	{
		prod=0;
		i++;
		while (n!=0)
	{
		rem=n%10;
		printf("%d+",rem);
		n/=10;
		prod=prod+rem;
	}
	printf("=%d\n",prod);
	n=prod ;
}
}
