#include<stdio.h>
void main ()
{
	int sec,hr,min,temp;
	printf("Enter the Time in Seconds ");
	scanf("%d",&temp);
	sec=temp;
	hr=sec/3600;
	sec=sec%3600;
	min=sec/60;
	sec=sec%60;
	printf("%d seconds is equivalent to %d hours %d minutes %d seconds",temp,hr,min,sec);
}
