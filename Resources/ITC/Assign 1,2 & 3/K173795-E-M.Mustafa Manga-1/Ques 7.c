#include<stdio.h>
void main ()
{
	int wa,ja,ia,x;
	printf("Enter the age of Wasim Akram  ");
	scanf("%d",&wa);
	printf("Enter the age of Javid Miandad ");
	scanf("%d",&ja);
	printf("Enter the age of Imran Khan  ");
	scanf("%d",&ia);
	if (wa>ja)
	x=ja;
	else
	x=wa;
	if(x>ia)
	x=ia;
	if (x==wa)
	printf("Wasim Akram is youngest");
	else if(x==ja)
	printf("Javid Miandad is youngest");
	else
	printf("Imran Khan is youngest");
}
	
