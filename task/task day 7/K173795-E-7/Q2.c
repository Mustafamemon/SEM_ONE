#include<stdio.h>
void main()
{
	long long num,c=0,rem ;
	printf("Enter The Num: ");
	scanf("%lld",&num);
	while (num!=0)
	{
		num=(long long)num/10;
		c++;
	}
	printf("The number has %lld digit",c);
}
