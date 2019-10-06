#include<stdio.h>
main()
{ 
	int x , y;
	x = 2003; 
	x++; 
	y = x++; 
	y = x; 
	y++; 
	x--; 
	x-- ;
	printf ("%d%d",x,y);
}

