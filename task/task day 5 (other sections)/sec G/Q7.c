#include<stdio.h>
int main ()
{
	int a=0, rem ;
	printf("%d000\n",a);
	printf("Enter four digit number :");
	scanf("%d",&a);
	rem =a%10;
	printf("\nunit=%d",rem);
	a=a/10 ;
	rem =a%10;
	printf("\ntens=%d",rem);
	a=a/10 ;
	rem =a%10;
	printf("\nhundreds=%d",rem);
	a=a/10 ;
	rem =a%10;
	printf("\nthousand=%d",rem);
	
}
