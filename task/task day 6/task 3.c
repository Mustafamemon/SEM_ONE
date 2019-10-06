#include<stdio.h>
#include<conio.h>
void main ()
{
	int a=0 ,b=0 ,c=0 ,d=0 ,e=0 ,x=0 ,y=0;
	printf("Enter the 1st Number :");
	scanf ("%d",&a);
	printf("Enter the 2nd Number :");
	scanf ("%d",&b);
	printf("Enter the 3rd Number :");
	scanf ("%d",&c);
	printf("Enter the 4th Number :");
	scanf ("%d",&d);
	printf("Enter the 5th Number :");
	scanf ("%d",&e);
	if(a>b)
		x=a;
	else
		x=b;
	if(x<c)
		x=c;
	if(x<d)
		x=d;	
	if(x<e)
		x=e;
	if(x==a)
	{	if(b>c)
		y=b;
	else
		y=c;
	if(y<d)
		y=d;	
	if(y<e)
		y=e;		} 		
	if(x==b) 
	{	if(a>c)
		y=a;
	else
		y=c;
	if(y<d)
		y=d;	
	if(y<e)
		y=e;		}
	if(x==c)
	{	if(b>d)
		y=b;
	else
		y=d;
	if(y<a)
		y=a;	
	if(y<e)
		y=e;	}
	if(x==d)
	{ if(a>b)
		y=a;
	else
		y=b;
	if(y<c)
		y=c;	
	if(y<e)
		y=e;	} 
	if(x==e)
	{ 	if(a>b)
		y=a;
	else
		y=b;
	if(y<c)
		y=c;	
	if(y<d)
		y=d;	} 
	printf("2nd Largest is :%d",y);
}
