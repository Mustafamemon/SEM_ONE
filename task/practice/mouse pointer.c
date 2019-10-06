#include<stdio.h>
/*int fact (int num , int temp)
{
	if (num>1)
	{
		temp=temp*num ;
		return fact (--num,temp);	
	}
	return temp ;
}
int powe (int num ,int num1 , int temp)
{
	if (num1>=1)
	{
		temp=temp*num ;
		return powe(num,--num1,temp);	
	}
	return temp ;
}
int prime (int num ,int i)
{
	if (num>1)
	{
		if (num%i==0)
		{
			num/=i;
			printf("%d ",i);	
			return prime(num,2);
		}
		return prime(num,++i);
	}
}
int main ()
{ 
	int num ,num1,res;
	scanf("%d",&num);
	scanf("%d",&num1);
	res=fact(num,1);
	printf("FACTORIAL = %d",res);
	res=powe(num,num1,1);
	printf("\nPOWER = %d",res);
	printf("\nPRIME FACTORS : ");
	prime(num,2);
	return 0;
}
*/
/*#include<stdio.h>
int func(int a , int b ,int x)
{
	if (x!=0)
	{
		if ((a%x)==0 && (b%x)==0)
		return x ;
		else
		return func(a,b,--x);
	}
	return x ;
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
	x=func(a,b,x);
	printf("GCF = %d",x);
}*/ 
void fun1(int *a ,int n,int k,int j)
{
	if (k<n)
	{
		if(a[k]%j==0)
		a[k]/=j ;
		return fun1(a,n,++k,j); 
	}
}
int func(int *a,int n ,int i ,int j ,int temp,int x)
{
	if (i<n)
	{
		if (j<=x)
		{
			if (a[i]%j==0)	
			{
				temp=temp*j ;
				fun1(a,n,i,j);
				return func(a,n,i,2,temp,x);
			}
			return func(a,n,i,++j,temp,x);
		}
		return func(a,n,++i,2,temp,x);	
	}
	return temp ;
}
void main ()
{
	int a[100] , i ,x ,n ;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	if (x<a[i])
	x=a[i];
	x=func(a,n,0,2,1,x);
	printf("LCM=%d",x);
}	

/*main()
{
	static int i = 0 ;
	i++ ;
	if ( i <= 5 )
	{
		printf ( "\n%d", i ) ;
		main() ;	
	}	
	else
	exit(0) ;
}*/
/*int binary (int num)
{
	if (num>=1)
	{
		return (num%2)+(10*binary(num/2));
	}
	
}
int main ()
{ 
	int num ,num1=0,res=0;
	scanf("%d",&num);
	num1=binary(num);
	printf("%d",num1);
}*/
/*#include <stdio.h>
int main( void )
{
	int b[] = { 10, 20, 30, 40 }; 
	int *bPtr = b; 
	int i; 
	int offset; 
	printf( "Array b printed with:\nArray subscript notation\n" );
	for ( i = 0; i < 4; i++ ) 
	{
		printf( "b[ %d ] = %d\n", i,bPtr[ i ] );
	} 
	printf( "\nPointer/offset notation where\n""the pointer is the array name\n" );
	for ( offset = 0; offset < 4; offset++ )
	{
		printf( "*( b + %d ) = %d\n", offset, *( b + offset) );
	}	 
	printf( "\nPointer subscript notation\n" );
	for ( i = 0; i < 4; i++ ) 
	{
		printf( "bPtr[ %d ] = %d\n", i,bPtr[ i ] );
	}
	printf( "\nPointer/offset notation\n" );
	for ( offset = 0; offset < 4; offset++ ) 
	{
		printf( "*( bPtr + %d ) = %d\n", offset, *(  b + offset) );
	}
	return 0; 
}*/
