#include<stdio.h>
#include<conio.h>
void main ()
{
	char ch ;
	int i=0;
	printf("Enter the sentence:\n");
	do 
	{
		ch=getche();
		//scanf("%c",&ch);
		if(ch=='a' || ch=='A')
		i++;
	}
	while (ch!='.');
	printf("\nThe total number of a's %d",i);
	
}
