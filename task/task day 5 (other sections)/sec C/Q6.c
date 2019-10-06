#include<stdio.h>
main ()
{
	int M , A, N ,Sum ; //A=afternoon, M=morning , N=night
	printf("Prescribe the tablets in morning :\n");
	scanf("%d",&M);
	printf("Prescribe the tablets in afternon :\n");
	scanf("%d",&A);
	printf("Prescribe the tablets in night :");
	scanf("%d",&N);
	Sum = M + A + N ;
	printf("Total Number of Tablets Raza takes in a Day is %d",Sum);
	return 0 ;
}
