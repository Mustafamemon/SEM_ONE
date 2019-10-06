#include<stdio.h>
void main()
{
	int row,  k, i, j,s,t,a,f;
	printf("Enter a  rows:\n");
	scanf("%d", &row);
	for (i=1;i<=row ; i++)
	{
		for (j=1;j<=row ; j++)
		{	
			if (j==1 || j==row ||i<=row-i+1 && i==j ||i<=row-i+1 && j==row-i+1 )
			printf("*");
			else 
			printf(" ");
		}
			for (k=1; k<=row ; k++)
		{
			if(k==1 || k==row || i==row )
			printf("?");
			else 
			printf(" ");
		}
		for (s=1;s<=row; s++)
		{
			if(i==1 || i==row || i==(row+1)/2 ||s==1 && i<=(row+1)/2 ||s==row && i>=(row+1)/2  )
			printf("*");
			else
			printf(" ");
		}
		for (t=1 ;t<=row ; t++)
		{
			if (i==1 || t==(row+1)/2 )
			printf("?");
			else
			printf(" ");	
		}
		for (a=1;a<=row;a++)
		{
			if(a==1 ||a==row || i==1|| i==(row+1)/2 )	
			printf("*");
			else
			printf(" ");
		}
		for(f=1;f<=row;f++)
		{
			if(f==1 || i==1|| i==(row+1)/2 )
			printf("?");
			else
			printf(" ");
		}
		for (a=1;a<=row;a++)
		{
			if(a==1 ||a==row || i==1|| i==(row+1)/2 )	
			printf("*");
			else
			printf(" ");
		}
		
		printf("\n");
	}
}
