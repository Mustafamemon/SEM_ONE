#include<stdio.h>
int func();
void main ()
{
	int a,N,b;
	printf ("Enter the number :");
	scanf("%d",&a);
	b=func(a);
	printf("\nThe Number is divisible by 7",b);
}
int func(int N)
{
	int rem=0,sub=0,a=0;

	while ( N!=7 && N!=0)
	{
		rem=N%10;
		N=N/10;
		a=(rem*2);
		sub=N-a;
		if(sub>0)
		N=sub;
	else
	{
		sub=sub*(-1);
		N=sub;
	}
	if(N==7 || N==0)
	{
		return N ;
	}
}
}
