#include<stdio.h>
main()
{
	int sum=0, rev, num, dig,i;
	printf("enter the digit ");
	scanf("%d",&dig);
	printf("enter the num ");
	scanf("%d",&num);
	for(i=1; i<=dig; i++)
	{
		rev=num%10;
		num=num/10;
		sum=sum+rev;
	}
	printf("sum=%d",sum);
}

