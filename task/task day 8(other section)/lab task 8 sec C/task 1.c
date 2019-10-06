#include<stdio.h>
int addup();
void main() 
{
	int add,sum=0,a,i;
	printf("How many number you want to addup ? ");
	scanf("%d",&add);
	sum=addup(add);
	printf("Sum of given number is %d",sum);
	
}
int addup(int b)
{
	int a,sum=0,i;
	printf("Enter the %d number Seprated by enter key :",b);
	for (i=b;i>=1;i--)
	{
		scanf("%d",&a);
		 sum=sum+a ;
	}
	return sum;
	
}


	
