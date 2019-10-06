#include<stdio.h>
void main ()
{
	int num,j,i,k=1,a=1;
	printf("Enter the num :");
	scanf("%d",&num);
	num-=1;
	for (i=0;i<=num;i++)
	{
		for (j=1;j<=num-i+1;j++)
		printf("%c",j+64);
		for(j=1;j<=(2*i)-1;j++)
		printf(" ");
		for (j=num-i+1;j>=1;j--)
		{
		if (i==0 && j==num+1)
		{
			j-=1;
		}
		printf("%c",j+64);
		}
		printf("\n");
	}
}
	
