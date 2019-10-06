#include<stdio.h>
void 	main ()
{
	int unit ;
	float  Rs ;
	printf("Enter the Units Consumed : ");
	scanf("%d",&unit);
	if(unit<=100)
	{
		Rs=unit*5.25 ;
	printf("Your Cost is :%.3f Rs",Rs);
	}
	if(unit>=101 && unit<=200)
	{
		Rs=unit*7.75 ;
	printf("Your Cost is :%.3f Rs",Rs);
	}
	if(unit>=201 && unit<=300)
	{
		Rs=unit*8.92 ;
	printf("Your Cost is :%.3f Rs",Rs);
	}
	if(unit>=301 && unit<=400)
	{
		Rs=unit*11.55 ;
	printf("Your Cost is :%.3f Rs",Rs);
	}
	if(unit>400)
	{
		Rs=unit*12.71 ;
	printf("Your Cost is :%.3f Rs",Rs);
	}
}




