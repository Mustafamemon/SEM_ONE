#include<stdio.h>
int main ()
{
	float temp_celsius , temp_fahrenheit, F , C ;
	printf("Enter temperature in Celsius:\n");
	scanf("%f", &temp_celsius);
	printf("Enter temperature in fahrenit:\n");
	scanf("%f", &temp_fahrenheit);
	F=(9*temp_celsius)/5 + 32 ;
	printf("Temperature in Fahrenhiet is %.3f F",F);
	C=(temp_fahrenheit - 32)*5/9;
	printf("\nTemperature in Celsius is %.3f C",C);
	
}
