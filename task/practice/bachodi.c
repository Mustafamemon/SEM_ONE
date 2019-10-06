#include<stdio.h>
void main ()
{
	int i , j ;
	for (i=0;i<=20;i++)
	{
		for (j=0;j<=70;j++)
		{
			if (i==0 || i==20 || j==0 || j==70) 
			printf("!");
			else
			printf(" ");
		}
		printf("\n") ;
	}
	
}
