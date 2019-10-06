#include<stdio.h>
void func ();
void func1();
void func2();
void func3();
void func4();
void func5();
void main ()
{
	int row ;
	printf("Enter the row :\n");
	scanf("%d",&row);
	func(row,row+1);
	func3(row,2);
	
}
void func(int row , int i)
{
	if(i>=1)
	{
		func1(1,i);
		func2(row+1,i,row);
		printf("\n");
		return func (row,--i);
	}
}
void func1(int j ,int i )
{
	if (j<=i)
	{
		printf("-");
		return func1(++j,i);
	}
}
void func2(int k , int i ,int row )
{
	if (k>=i)
	{
		printf(" +");
		return func2(--k,i,row);
	}
}
void func3(int row , int i)
{
	if(i<=row+1)
	{
		func4(1,i);
		func5(row+1,i,row);
		printf("\n");
		return func3(row,++i);
	}
}
void func4(int j ,int i )
{
	if (j<=i)
	{
		printf("-");
		return func4(++j,i);
	}
}
void func5(int k , int i ,int row )
{
	if (k>=i)
	{
		printf(" +");
		return func5(--k,i,row);
	}
}


