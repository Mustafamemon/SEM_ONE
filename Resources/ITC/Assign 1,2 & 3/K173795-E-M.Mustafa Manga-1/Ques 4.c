#include<stdio.h>
void main ()
{
	int num[3],x=0,i,y;
	printf("Enter the three Numbers ");
	for(i=0;i<=2;i++)
	{
	scanf("%d",&num[i]);
	if (x<num[i])
	x=num[i];
	}
	y=x;
	for(i=0;i<=2;i++)
	{
	if (y>num[i])
	y=num[i];
	}
	printf("The largest number is %d\nThe smallest number is %d",x,y);
	}

