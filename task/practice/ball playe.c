#include<stdio.h>
void main ()
{
	int n=0,b,t,i,j,sum=0,k,l=0;
	scanf("%d",&t);
	for (k=1;k<=t;k++)
	{
		l=0;
		sum=0;
		scanf ("%d %d",&n,&b);
		int set[n];
		for (j=0;j<n;j++)
		scanf("%d",&set[j]);
	for (i=1;i<=b-1;i++)
	{
		sum=sum+set[l];
		if (l<n-1)
		l++;
		else
		l=0;
	}
	printf("%d\n",sum);
}
}
