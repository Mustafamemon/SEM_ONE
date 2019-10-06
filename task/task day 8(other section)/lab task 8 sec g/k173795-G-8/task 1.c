#include<stdio.h>
int x (int y);
void main ()
{
	int y;
	printf("Enter the Year : ");
	scanf("%d",&y);
	x(y);
}
int x (int y)
{
	if (y>=1000)
	{
		printf("m");
		x(y-1000);
		
	}
	else if (y>=500)
	{
		printf("d");
		x(y-500);
	}
	else if(y>=100)
	{
		if (y==400)
		printf("cd");
	else
	{
		printf("c");
		x(y-100);
	}
	}
	else if (y>=50)
	{
		printf("l");
		x(y-50);
	
	}
	else if (y>=10)
	{
			if (y==40)
		printf("xl");
		else
	{
		printf("x");
		x(y-10);
	}
	}
	else if (y>=5)
	{
		if(y==9)
		printf("ix");
		else
		{
			printf("v");
		x(y-5);
		}
		
	}
	else if (y>=1)
	{
		if(y==4)
		printf("iv");
		else
	{
		printf("i");
		x(y-1); 
	}			
	}
}

	
