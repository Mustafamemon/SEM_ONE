#include<stdio.h>
void main()
{
	int num , sum=0,i,j;
	printf("Enter a Number:");
	scanf("%d",&num);
	printf("Enter a Number:");
	scanf("%d",&j);
	for(i=1;i<=j;i++)
    {
	sum=sum+num ;
	
	}	
	printf("%d x %d = %d",num,j,sum);
}
	
