#include<stdio.h>
int main () 
{
	
	int row,col;
	int noOfrows;
	printf("enter number of rows/n");
	scanf("%d",&noOfrows);
	for(row=1;row<=noOfrows;row++){
		
		for(col=1;col<=row;col++){
			printf("*");
		
		}
		printf("\n");
	}
}
