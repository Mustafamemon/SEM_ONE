#include<stdio.h>
int func();
void main ()
{
	int res;
	res=func();
	printf("In %d ways",res);
}
int func()
{
	int b=7,g=3,tot=10,n=1,r=1,a,d=1,c,i,s=4,e;
	for (i=1;i<=tot;i++)
	{
		n=n*i;	
	}
	for (i=1;i<=b;i++)
	{
		r=r*i;
	}
	a=tot-b;
	for (i=1;i<=a;i++)
	{
		d=d*i;	
	}
	c=n/(r*d);
	e=(c+c)/s;
	return e;
}
