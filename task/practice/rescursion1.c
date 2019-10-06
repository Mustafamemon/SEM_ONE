#include<stdio.h>
void func ();
void func1();
void func2();
void func3();
void main ()
{
	int row ;
	printf("Enter the row : ");
	scanf("%d",&row);
	func(row,row);
}
void func(int row , int i)
{
	if (i>=0)
	{
	func1(1,i,row);
	func2(1,i);
	func3(row-i,row,i);
	printf("\n");
	return func (row , --i);
	
	}
}
void func1(int j ,int i ,int row)
{
	if (j<=row-i)
	{
		printf("%d ",j);
		return func1 (++j,i,row);
	}
	
}
void func2 (int k ,int i)
{
	if (k<=(2*i)-1)
	{
		printf("  ");
		return func2 (++k, i);
	}
}
void func3(int j ,int row,int i)
{
	if (j>=1)
	{
		if (i==0 && j==row-i);
       	else
		printf("%d ",j);
		return func3 (--j,row, i);
	}
	
}

