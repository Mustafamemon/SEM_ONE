#include<stdio.h>
void main ()
{
	int  z = 45;
	float y = 123.34 ,e ;
	double a = 28 ;
	z=(int)y%5;
	printf("Modulus of two d/f datatype is %d",z);
	e=z/a;
	printf("\nDivision of two d/f datatype is %f",e);
}
