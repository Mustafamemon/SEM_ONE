#include<stdio.h>
int func ();
int func1 ();
void func2 ();
int main ()
{
	int num,q,p,res ;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("Enter p : ");
	scanf("%d",&p);
	printf("Enter q : ");
	scanf("%d",&q);
	res=func (num,0,p,q,1);
	res=func (res,1);
	printf("%d",res)
}
int func (int num ,int rev , int p int q,int i)
{
	int rem,a ;
	if(i<=4)
	{			
		rem=num%10;
		num/=10;
		a=(rem%p)+q;
		rev=(rev*10)+rem;
		return func(num,rev,p,q,++i)
	}
	return rev ;	
}
int func (int rev ,int a ,int i)
{
	int rem,a ;
	if(i<=4)
	{			
		rem=rev%10;
		rev/=10;
		a=(a*10)+rem;
		return func(num,a,++i)
	}
	return a ;	
}
