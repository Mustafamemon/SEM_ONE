#include<stdio.h>
void fib();
void main ()
{
	int num;
	printf("Enter the Number : ");
	scanf("%d",&num);
	num=num-2;
	printf("0 : 0\n1 : 1\n");
	fib(num,0,1,0);
}
void fib(int x,int num ,int num1,int i)
{
	int sum;
		if (i<=x)
		{
			sum=num+num1;
			printf("%d : %d\n",i+2,sum);
			num=num1;
			num1=sum;
			return fib(x,num,num1,++i);
		}
	}

