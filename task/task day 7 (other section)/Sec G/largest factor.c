#include<stdio.h>
void main()
{
	int num, sum = 0, a, i, j;
	printf("Enter a positive Number:\n");
	scanf("%d", &num);
	for (i = 1; i <= num - 1; i++)
	{
		j = num % i;
		if (j == 0)
		{
			a = i;
		}
	}
	printf("The largest factor is :%d\n", a);
}
