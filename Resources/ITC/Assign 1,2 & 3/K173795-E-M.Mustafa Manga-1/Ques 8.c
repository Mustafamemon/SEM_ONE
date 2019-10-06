#include<stdio.h>
void main ()
{
	int ang[3],i,sum=0;
	for (i=0;i<=2;i++)
	{
		printf("Enter the %d angle  ",i+1);
		scanf("%d",&ang[i]);
		sum+=ang[i];
	}
	if (sum==180)
	printf("Triangle is Valid ");
	else
	printf("Triangle is not Valid ");
}
	

