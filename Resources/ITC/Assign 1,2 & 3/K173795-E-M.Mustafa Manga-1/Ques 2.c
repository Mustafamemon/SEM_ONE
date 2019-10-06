#include<stdio.h>
void main ()
{
	float temp_celsius, F;
	printf("Enter temperature in Celsius:\n");
	scanf("%f", &temp_celsius);
	F=(9*temp_celsius)/5 + 32 ;	
	printf("%.1f degrees celsius convet to %.1f degrees Fahrenheit ", temp_celsius,F);
}
