#include<stdio.h>
void main ()
{
	int sec, min, hou,tem;
	printf("Enter the time im sec \n" );
	scanf("%d",&tem);
	sec = tem ;
	hou=sec/3600;
	sec =sec%3600;
	min=sec/60;
	sec=sec%60;
	printf ("%d sec is equal to %d hours and %d min and %d sec",tem,hou,min,sec);
}
