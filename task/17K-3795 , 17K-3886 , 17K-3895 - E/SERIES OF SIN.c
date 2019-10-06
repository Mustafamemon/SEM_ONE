#include<stdio.h>
int func(int a , int b ,int x)
{
	if (x!=0)
	{
		if ((a%x)==0 && (b%x)==0)
		{
			printf("GCF = %d",x);
			return ;
		}
		else
		return func(a,b,--x);
	}
}
main ()
{
	int a , b ;
	scanf("%d %d",&a,&b);
	int x ;
	if (a<b)
	x=a ;
	else
	x=b ;
	func(a,b,x);
}
