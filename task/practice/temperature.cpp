#include<stdio.h>
int main ()
{
	int ans ;
	float temp_celsius , temp_fahrenheit, F , C ;
	printf("Enter temperature in fahrenit:\n");
	scanf("%f", &temp_fahrenheit);
	printf("Enter temperature in Celsius:\n");
	scanf("%f", &temp_celsius);
	printf("1=Temp In fahrenhiet\n2=Temp In Celsius\nEnter the number :");
	scanf("%d",&ans);
	if(ans==1)
	{
	F=(9*temp_celsius)/5 + 32 ;
	printf("Temperature in Fahrenhiet is %.3f F\n\n",F);
}
else
if(ans==2)
{	
	C=(temp_fahrenheit - 32)*5/9;
	printf("Temperature in Celsius is %.3f C",C);
}
	return 0 ;
}
