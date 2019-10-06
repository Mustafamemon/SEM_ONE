#include<stdio.h>
void func();
void main ()
{
	int Num;
	printf("Enter the number of rows");
	scanf("%d",&Num);
	func(Num);
}
void func (int a)
{
	int i,j,k;
	for (i=1;i<=a;i++)
	{
		for (j=1;j<=i;j++)
		printf("%d",j);
		for (k=i-1;k>=1;k--)
		printf("%d",k);
		printf("\n");
		
	}
}

