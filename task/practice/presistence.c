#include<stdio.h>
void main ()
{
	int rem,n,prod=1,i=0,t,sum=0;
	printf("Enter the Value :");
	scanf("%d",&n);
	while (n>10)
	{
		sum=0;
		t=n;
		while(t!=0)
	{
		rem=t%10;
		t/=10;
		sum=(sum*10)+rem;
	}
		n=sum;
		i++;
		prod=1;
		while (n!=0)
	{
		rem=n%10;
		printf("%d*",rem);
		n/=10;
		prod*=rem;
	}
	n=prod;	
	printf("=%d\n",n);
	}

	printf("The presistence of the numbber is %d",i);
}
