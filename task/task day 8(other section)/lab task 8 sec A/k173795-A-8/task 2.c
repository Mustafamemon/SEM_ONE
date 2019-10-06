#include<stdio.h>
void pri();
void main ()
{
	int a;
	printf("Enter the Number :");
	scanf("%d",&a);
	pri(a);
	
}
void pri(int num)
{
	int i;
	for (i=2;i<=num;i++)
	{
		if(num%i==0)
		break;
	}
	if (num==i)
	printf("%d is a prime number",num);
	else
	printf("%d is not a prime number",num);
}
