#include<stdio.h>
void main ()
{
	int i ,j;
	for (i=500;i<=1000;i++)	
{   
	printf("%d ",i);
	if(i%10==4 || i%10==9)
	printf("\n");	
}
}

