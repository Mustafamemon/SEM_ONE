#include<stdio.h>
void main ()
{
	int m ,i,j,k=0,a=1;
	scanf ("%d",&m);
	int arr [100][100];
	for (i=1;i<=m;i++)
	{
		
		if (a==3)
	{	k=k+i ;
	      a=0;
	}
		else
		k=0;
		for (j=0;j<=m+1;j++)
		 {
		 	if (j==0 || j==m+1)
		 {
		 	printf ("%d ",k);
		 }
		 else
		printf("%d ",i);
		 }
		 printf("\n");
		 a++;
	}
}	