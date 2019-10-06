#include<stdio.h>
void main()
{
	int N,Num,sum=0,rem,i;
	printf("Enter te number");
	scanf("%d",&i);
	for (Num=1;Num<=i;Num++)
	{	
		N=Num;
		sum=0;
		while (N!=0)
		{
		rem=N%10;
		N/=10;
		sum+=(rem*rem)*rem;
		}
	if (sum==Num)
	printf("\n%d is an armstrong no",Num);
	}
}
//else
	//printf("\n%d is not an armstrong no",N);
