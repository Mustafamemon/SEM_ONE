#include<stdio.h>
int main()
{
    int n, i ;
	scanf("%d", &n);
    for ( i = 0; i <= n; i++)
	printf(" %d : %d\n",i , fib(i));
}
int  fib(int n) {
    if (n == 0) return 0;
	if (n == 1) return 1;
    if (n == 2) return 1;
    if (n % 2 != 0) 
	{
    int a = fib((n+1)/2);
    int b = fib((n-1)/2);
    return a*a + b*b;
    }
    int a = fib(n/2 + 1);
    int b = fib(n/2 - 1);
    return a*a - b*b;
    }

