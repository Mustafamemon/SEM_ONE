
#include<stdio.h>
void main()
{
	int num, k, i, j;
	printf("Enter a  Number:\n");
	scanf("%d", &num);
	for (i =1; i <= num; i++)
	{
		for(k=1;k<=(num-i);k++)
		printf(" ");
		for (j=1;j<=(2*i)-1;j++)
		printf("%d",j);
		printf("\n");
	}
	
}
