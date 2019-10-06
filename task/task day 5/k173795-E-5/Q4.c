#include<stdio.h>
int main ()
{
	int days, weeks, years,remaining_days ;
	printf("enter number of days :\n");
	scanf("%d", &days);
	years = days/365;
	remaining_days =days%365;
	weeks =remaining_days/7;
	days = remaining_days%7;
	printf("No of years: %d \nNo of weeks : %d \nNo of days : %d", years , weeks, days );
	return 0 ;	
}
