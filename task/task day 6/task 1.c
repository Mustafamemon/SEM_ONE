#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
	float x1, x2, a, b, c,dis ;
	printf("Enter a:");
	scanf("%f",&a);
	printf("Enter b:");
	scanf("%f",&b);
	printf("Enter c:");
	scanf("%f",&c);
	x1 = ((-b) + sqrt ((b*b)-(4*a*c)))/(2*a);
	printf("x1=%f",x1);
	x2 = ((-b) - sqrt ((b*b)-(4*a*c)))/(2*a);
	printf("\nx2=%f",x2);
	dis=((b*b)-(4*a*c));
	printf("\nDiscriminant=%f",dis);
	if(dis==0)
	{
		printf("\nRoots Are Equal");
	}
	else if(dis<0)
	{
		printf("\nRoots Are Imaginary");
	}
	else if(dis>0)
	{
		printf("\nRoots Are Real");
	}
	
	getch();
}
