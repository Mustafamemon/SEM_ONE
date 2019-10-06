/*#inlcude<stdio.h>
int func(int a , int b ,int x)
{
	if (x!=1)
	{
		if ((a%x)==0 && (b%x)==0)
		{
			printf("GCF = %d",x);
			return ;
		}
		else
		return func(a,b,--x);
	}
}
main ()
{
	int a , b ;
	scanf("%d %d",&a,&b);
	int x ;
	if (a<b)
	x=a
	else
	x=b ;
	func(a,b,x);
}*/
/*#include<stdio.h>
#include<math.h>
int func(int x,int i,int j,float temp,int k, int a)
{
	if (k>=2)
	{
		a=a*k ;
		return func(x,i,j,temp,--k,a);
	}
	if (i<=9)
	{	
		if (j%2==0)
		temp=temp-(pow(x,i))/a;
		else
		temp=temp+(pow(x,i))/a;
		return func(x,i,++j,temp,i=i+2,1);
	}
	printf("\n%f",temp);
}
void main()
{
	int x ;
	scanf("%d",&x);
	func(x,1,1,0,1,1);
}
*/
#include<stdio.h>
int func(int a , int b ,int x)
{
	if (x!=0)
	{
		if ((a%x)==0 && (b%x)==0)
		{
			printf("GCF = %d",x);
			return ;
		}
		else
		return func(a,b,--x);
	}
}
main ()
{
	int a , b ;
	scanf("%d %d",&a,&b);
	int x ;
	if (a<b)
	x=a ;
	else
	x=b ;
	func(a,b,x);
}
