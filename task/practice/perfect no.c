#include<stdio.h>
void main ()
{
	int N,Num,sum=0,rem,i,j;
	printf("Enter te number: ");
	scanf("%d",&i);
	for (Num=1;Num<=i;Num++)
	{	
		N=Num;
		sum=0;
		for (j=1;j<Num;j++)
		{
			if (N%j==0)	
			sum+=j;
		}
	if (sum==Num)
	printf("\n%d is an perfect no",Num);
	}
}
