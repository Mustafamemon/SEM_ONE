#include<stdio.h>
void main ()
{
	float A1, A2, A3, Sum ;
	printf("Enter the First Angle: ");
	scanf("%f",&A1);
	printf("Enter the Second Angle: ");
	scanf("%f",&A2);
	printf("Enter the third Angle: ");
	scanf("%f",&A3);
	Sum=A1+A2+A3;
	if(Sum<=180)
	{
		if (A1==A2==A3)
			printf("The Given Angles form Equilateral Triangle");
		if(A1==A2 || A2==A3 || A1==A3)
			printf("The Given Angles form Isoscles Triangle");
		else 
			printf("The Given Angles form Scalene Triangle");
	}
	else
	printf("The Given Doesnot form Triangle");
}
