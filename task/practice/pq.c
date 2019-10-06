#include<stdio.h>
int func ();
int func1 ();
int func2 ();
void main ()
{
	int num,q,p,res,res1=0 ;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("Enter p : ");
	scanf("%d",&p);
	printf("Enter q : ");
	scanf("%d",&q);
	res=func (num,0);
	res1=func1(res,0,p,q,1);
	printf("%d",res1);
}
int func (int num ,int rev)
{
	int rem,a,b,res1;
	if(num!=0)
	{			
		rem=num%10;
		num/=10;
		rev=(rev*10)+rem;
		return func(num,rev);
	}
	return rev ;
}
int func1(int num ,int rev , int p ,int q,int i)
{
	int rem,a ;
	if(i<=4)
	{			
		rem=num%10;
		num/=10;
		a=(rem%p)+q;
		rev=(rev*10)+a;
		return func1(num,rev,p,q,++i);
	}
	func2(num,0,p,q,1);
	return rev ;
}
int func2(int num ,int rev , int p ,int q,int i)
{
	int rem,a ;
	if(i<=4)
	{			
		rem=num%10;
		num/=10;
		a=(rem%q)+p;
		rev=(rev*10)+a;
		return func2(num,rev,p,q,++i);
	}
	printf("%d",rev);
}

