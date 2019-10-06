#include<stdio.h>
float main()
{
	float mass, M;
	printf("Enter Mass in Kg :\n");
	scanf("%f", &mass);
	M=mass*2.20462 ;
	printf("Mass in pound is %.3f lbs",M);
	return 0 ;
}
