#include<stdio.h>
void main()
{
	int num,i ;
	printf("Enter The Num: ");
	scanf("%d",&num);
	for (i=1;i<=12;i++)
	{
		printf("\n%d x %d = %d",num,i,num*i);
	}
}

