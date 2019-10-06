#include<stdio.h>
void func1 ();
int func ();
int func2();
void main ()
{
	int num ;
	printf("Enter the number : ");
	scanf("%d",&num);
	func1(num);
}
void func1 (int num)
{
	int res,sum;
	if (num>10)
	{
	res=func2(num,0);
	num=res;
	res=func (num,1);
	printf("=%d\n",res);
	num=res;
	return func1(num);

	}

}
int func2(int a ,int sum)
{
	int rem ;
	if (a!=0)
	{
		rem=a%10;
		a/=10;
		sum=(sum*10)+rem;
		return func2 (a,sum);
	}
	return sum;	
}
int func (int a, int sum )
{
	int rem ;
	if (a!=0)
	{
		rem=a%10;
		a/=10;
		sum=sum*rem;
		printf("%d*",rem);
		return func (a,sum);
	}
	printf("\b ");	
	return sum ;
}

