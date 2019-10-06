#include<stdio.h>
int main ()
{
	int days, weeks,months, years,remaining_days ;  
	printf("enter number of days :\n");
	scanf("%d", &days);
	years = days/365;
	remaining_days =days%365;
	months = remaining_days/30 ;
	remaining_days =days%30;
	weeks =remaining_days/7;
	days = remaining_days%7;
	printf("No of years: %d \nNo of Months : %d \nNo of weeks : %d \nNo of days : %d", years, months, weeks, days );	
}
