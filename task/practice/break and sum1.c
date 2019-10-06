#include<stdio.h>
main()
{
	int rev, sum=0,i,no,n;
	printf("How many digits");
	scanf("%d", &no);
	printf("enter the no:");
	scanf("%d",&n);
	while (n<=0)
	{
		rev=n%10;
		n=n/10;
		sum=sum+rev;
	}
	printf("sum=%d", sum);
}
