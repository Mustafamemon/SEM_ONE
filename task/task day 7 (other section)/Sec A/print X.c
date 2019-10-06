#include<stdio.h>
void main()
{
	int N, i, j, k, l;
	printf("Enter the ex-N value :\n");
	scanf("%d", &N);
	for (i = 1; i <= (((2 * N) + 1)); i++)
	{
		for (j = 1; j <= (((2 * N) + 1)); j++)
		{
			if (i == j || j == (((2 * N) + 1) - i + 1))
				printf(" * ");
			else
				printf(" - ");
		}
		printf("\n");
	}
}
