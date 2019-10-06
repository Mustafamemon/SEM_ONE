#include<stdio.h>
void func ();
void func1();
void func2();
void main ()
{
	int row ;
	printf("Enter the row : ");
	scanf("%d",&row);
	func(row,1);
}
void func (int row ,int i)
{
	if(i<=row)
	{
		func1 (row , 1 , i);
		func2(1,i);
		return func(row ,++i);		
	}
}
void func1 (int row ,int j, int i)
{	
	if (j<=row-i)
	{
		printf(" ");
		return func1(row ,++j,i);	
	}
}
void func2(int k , int i)
{
	if (k<=(2*i)-1)
	{
		printf("%d",k);
		return func2(++k,i);
	}
	printf("\n");
}
