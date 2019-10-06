#include<stdio.h>
#include<conio.h>
void main ()
{
	int ans;
	printf("Enter the Grade :");
	scanf ("%d",&ans);
	if(ans>=80)
	printf("A+");	
	else if(ans>=70)
	printf("A");
	else if(ans>=60)
	printf("B");
	else if(ans>=50)
	printf("C");
	else if(ans>=40)
	printf("D");
	else if(ans<40)
	printf("F");
}
