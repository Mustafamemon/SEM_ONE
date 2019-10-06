#include<stdio.h>
main()
{
	float BMI,W, H ;
	printf("Enter Weight (kg):");
	scanf("%f",&W);
	printf("Enter Height (meter):");
	scanf("%f",&H);
	H=H*H;
	BMI=W/H;
	printf("BMI=%f",BMI);
	if(BMI<18.5)
		printf("\nunder weight");
	if(BMI<17.5)
		printf("\nanoroxic");
	if (BMI<=15);
		printf("\nstarvation");
	
	}

	
