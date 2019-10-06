#include<stdio.h>
void main()
{
	int N=0,rem=0, rev=0, num,a=0;
	printf("Enter the Number \n");
	scanf("%d",&N);
	while (N!=0)
	{
		rem=N%10;
		N=N/10;
		num=rem+1;
		rev=(rev*10)+num ;
	}
	while (rev!=0)
	{
		rem=rev%10;
	//	a=(a*10)+rem ;
	printf("%d",rem);
		rev=rev/10;
		
	}
	
}

