#include<stdio.h>
int main ()
{
	float temp_celsius , temp_fahrenheit, F , C ;
	printf("Enter temperature in Celsius:\n");
	scanf("%f", &temp_celsius);
	F=(9*temp_celsius)/5 + 32 ;
	printf("Temperature in Fahrenhiet is %.3f F\n\n",F);
	printf("Enter temperature in fahrenit:\n");
	scanf("%f", &temp_fahrenheit);	
	C=(temp_fahrenheit - 32)*5/9;
	printf("Temperature in Celsius is %.3f C",C);
	return 0 ;
}
