#include<stdio.h>
void main ()
{
	int a,b,total=0,i=0;
	printf("Enter the number ");
	scanf("%d %d",&a,&b);
	if (a>b)
	{
		b*=2;
		a/=2;
		while (b!=1)
		{
		//	a*=2;
			printf("%d    %d\n",b/=2,a*=2);
			if (b%2==1)
			{
				total=total+a;
			}
		}
		printf("\nthe total is %d",total);
	}
	else
	{
		a*=2;
		b/=2;
		while (a!=1)
		{
		//	b*=2;
			printf("%d    %d\n",a/=2,b*=2);
			if (a%2==1)
			{
				total=total+b;
			}
		}
		printf("\nthe total is %d",total);
	}
	
}
