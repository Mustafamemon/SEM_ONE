#include<stdio.h>
void func ();
void func1();
void func2();
void main ()
{
	int num ;
	printf("Enter the Number : ");
	scanf("%d",&num);
	func(num,num);	
}
void func (int num,int i)
{
	if(i>=1)
	{
		func1(num,1,i);
		func2(num,1,i);
		func1(num,1,i);
		printf("\n");
		return func(num,--i);
	}
}
void func1(int num , int j,int i)
{
	int k=1;
	if (j<=i)
	{
		printf("%d",k);
		k=+2;
		return func1(num,++j,i);
	}
	
}
void func2 (int num ,int l,int i)
{
	if (l<=2*i-1)
	{
		printf(" ");
		return func2(num,++l,i);
	}
	
}
