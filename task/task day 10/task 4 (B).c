#include<stdio.h>
int sum(int *a , int n)
{
	int i=0,x=0;
	while(i<n)
	{
		x=x+a[i];
		i++;
	}
	return x;
}
int main ()
{
	int a[]={56,76,88,45};
	int n=6 ;
	int r=0;
	r=sum(a,n);
	printf(":%d \n",r);
}
