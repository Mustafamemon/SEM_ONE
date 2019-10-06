#include<stdio.h>
//#include<math.h>
void main ()
{
	int a,b,i ;
	float c=1;
	printf("Enter the base :\n");
	scanf("%d",&a);
	printf("Enter the power :\n");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	c=a *c;
//	c=pow(a,b);
	printf("%d raised to the %d is %e",a,b,c);
	
}