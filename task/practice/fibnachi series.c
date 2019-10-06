#include<stdio.h>
void main ()
{
 int n=0,n1=1,i,sum=0,N;
 printf("Enter the number");
 scanf("%d",&N);
 printf("\n%d\n%d",n,n1);
 for(i=1;i<=N;i++)
 {
     sum=n+n1;
     n=n1;
	 n1=sum;
	 printf("\n%d",sum)	;
	 
	 
 }
}
