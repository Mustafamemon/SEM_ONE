#include <stdio.h>
int main()
{
    int i, j,k,l,row,f,z;
    printf("Enter value of n :\n");
    scanf("%d", &row);
   // z=(2*i)-1;
    for (i=row;i>=0;i--)
    {
    	for (j=1;j<=row-i;j++)
    	printf("%d ",j);
    	for (l=1;l<=(2*i)-1;l++)
    	printf("  ");
    	//z=z-2;
    	for (k=row-i;k>=1;k--)
    	if (i==0 && k==row-i)
    	f=0;
    	else
    	printf("%d ",k);
    	printf("\n");
    }
}
