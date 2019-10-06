#include<stdio.h>
#include<conio.h>
void main()
{
	float a ,b ,Add;
	char ans ,aa ;
	scanf("\n%f",&a);
	fflush(stdin) ;
	scanf("%c",&ans);
	scanf("\n%f",&b);
	Add = a ans b ;
/*	if (ans=='+')
	{
		Add=a+b ;
	}
	else if (ans=='-')
	{
		Add=a-b ;
	}
	else if (ans=='*')
	{
		Add=a*b ;
	}
	else if (ans=='/')
	{
		Add=a/b ;
	}
	fflush(stdin) ;*/
	scanf("%c",&aa);
	if (aa=='=')
	printf("%.2f ",Add) ;
}
