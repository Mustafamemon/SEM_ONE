#include<stdio.h>
#include<conio.h>
void main ()
{
	int i=0,j=0;
	char sen;
	printf("Enter the Sentence : ");
	while (getche ()!='\r')
{
	if (getche ()!=' ')
	j++;
	}	
	printf("\n%d",j);
	
	
}
