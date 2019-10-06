#include <stdio.h>

int main()
{
    int i, j,k, row;
    printf("Enter value of n :\n");
    scanf("%d", &row);
    for (i=row+1;i>=1;i--)
    {
    	for (j=1;j<=i;j++)
    	printf("-");
    	for (k=row+1;k>=i;k--)
    	printf(" +");
    	printf("\n");
    }
        for (i=2;i<=row+1;i++)
    {
    	for (j=1;j<=i;j++)
    	printf("-");
    	for (k=row+1;k>=i;k--)
    	printf(" +");
    	printf("\n");
    }
}
