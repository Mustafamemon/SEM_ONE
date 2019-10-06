#include<stdio.h>
int main ()
{
	int num1 ;
	float num2 ;
	printf("Enter 4-digit int\n");
	scanf("%d", &num1);
	printf("%6d",num1);
	printf("\n%3d",num1);
	printf("\nEnter Floating Number\n");
	scanf("%f",&num2);
	printf("%.2f",num2);
	printf("\n%.0f",num2);
	printf("\n%e",num2);
	return 0 ;	
}
