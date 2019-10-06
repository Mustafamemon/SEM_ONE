#include<stdio.h>
void main ()
{
	int nc,hrs,cost;
	printf("How many Cars you wants to order : ");
	scanf("%d",&nc);
	printf("How many hours you wants to run plant per day 16hr 0r 8hr : ");
	scanf("%d",&hrs);
	if (hrs==8)
	{
		printf("\nif plant works 8hrs per days \ncost =%d\nhours = %d\ndays = %d",nc*60,nc/10,nc/80);
	}
	else
	{
		printf("\nif plant works 16hrs per days \ncost =%d \nhours =%d\ndays = %d",nc*120,nc/10,nc/160);
	}
	
	
	
}
