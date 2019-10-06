#include<stdio.h>
int func();
int func1();
void main (){
	
	int num,p,q,b,res,res1;
	printf("Enter the 8-digits integer : ");
	scanf("%d",&num);
	printf("Enter p : ");
	scanf("%d",&p);
	printf("Enter q : ");
	scanf("%d",&q);
	res=func(num,0,1,p,q,0,0);
	res1=func2(num,0,1,p,q,0,0);
	b=res;
	func(res1,0,1,p,q,0,0);
	func1(b,0,1);
}
int func(int num , int sum,int i,int p , int q){
	int rem,a;
	if (i<=4)
	{
		
		rem=num%10;
		num/=10;
		a=((rem%p)+q);
		sum=(sum*10)+a;
		return func(num,sum,++i,p,q);	
	}	
	return sum;
}
int func2(int num , int sum,int i,int p , int q){
	int rem,a;
	if (i<=4)
	{
		
		rem=num%10;
		num/=10;
		return func2(num,sum,++i,p,q);	
	}	
	return num;
}
int func1(int num,int sum,int i)
{
	int rem,a;
	if (i<=4)
	{
		
		rem=num%10;
		num/=10;
		sum=(sum*10)+rem;
		return func1(num,sum,++i);
}
printf("%d",sum);
}
