#include<stdio.h>
int func();
int func1();
void main()
{
	int num[5];
	func(0,num[5]);
	func1(0,num[5]);
}
int func (int i, int num[i])
{
	if (i<=4)
	{
		printf("enter the num at loc %d ",i+1);
		scanf("%d",&num[i]);
		return func(++i,num);
	}
}
int func1(int i,int num[i])
{
	if (i<=4)
	{
		printf("%d\n ",num[i]);
		return func1(++i,num);
	}
}

