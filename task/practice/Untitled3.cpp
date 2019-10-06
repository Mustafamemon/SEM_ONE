#include<stdio.h>
int main () 
{
	int noOfrows;
	
	int row,col;
	
	printf("enter number of rows/n");
	scanf("%d",&noOfrows);
	int noOfcol=noOfrows;
	for(row=1;row<=noOfrows;row++){
			
		for(col=1;col<=noOfcol;col++){
			printf("*");
		}
		printf("\n");
		noOfcol--;
		
	}
	
}
