#include<stdio.h>
main ()
{
	int a,b,c,d,e,lar,slar;
	lar= -32786;
	slar= -32786;
	printf("Enter 5 numbers: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	if (a>lar)
	{
		slar=lar;
		lar=a;
	}
	else if (a>slar)
		slar=a;
	if (b>lar)
	{
		slar=lar;
		lar=b;
	}
	else if (b>slar)
		slar=b;
	if (c>lar)
	{
		slar=lar;
		lar=c;
	}
	else if (c>slar)
		slar=c;
	if (d>lar)
	{
		slar=lar;
		lar=d;
	}
	else if (d>slar)
		slar=d;
	if (e>lar)
	{
		slar=lar;
		lar=e;
	}
	else if (e>slar)
		slar=e;
	printf("The second largest number is %d",slar);
}

