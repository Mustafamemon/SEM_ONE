#include<stdio.h>
void main ()
{
	int H,i=0, Y;
	printf("Enter the Height :");
	scanf ("%d",&H);
	printf("Enter the Y : ");
	scanf ("%d",&Y);
	if (H>Y)
	{
		while (H>Y)
		{
			i++;
			H=(H*2)/3;
		}
		printf("The ball wil Bounce %d times",i);
	}
	else
	printf(" The ball wil Bounce %d times",i);
	
}
