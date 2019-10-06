#include<stdio.h>
#include<conio.h>
void main ()
{
	int year , ldays,rem ,ndays,tdays;
	printf("enter the year\n");
	scanf("%d",&year);
    year=year-1;
 	ldays=(year/4)-(year/100)+(year/400);
	ndays=(year*365);
	tdays=ndays+ldays;
	rem=tdays%7;
	if (rem==0)
	printf("Monday");
  	else if (rem==1)
	printf("Tuesday");
	else if (rem==2)
	printf("Wednesday");
	else if (rem==3) 
	printf("Thursday");
	else if (rem ==4)
	printf("Friday");
	else if (rem==5) 
	printf("Saturday");
	else if (rem==6) 
	printf("Sunday");
}
	
