#include<stdio.h>
void main ()
{
	int n,x,s,t,i,j,k,sum,y=0,Or,l=0;
	scanf("%d",&t);
	for  (i=0;i<t;i++)
	{
		y=0;
		Or=0;
		scanf("%d %d %d",&n,&s,&x);
		for (j=0;j<=9;j++)
		{
			sum=0;
			Or=0;
			for (k=1;k<=n;k++)
			{
				sum=sum+j ;
				Or=Or^j ;
			}
			if (sum==s)
			y=1;
			else
			y=0;
			if (Or==x)
			l=1;
			else
			l=0;
			if (y==1 && l==1)
			break;
		}
	if (y==1 && l==1)
	printf("YES\n");
	else
	printf("NO\n");
	}
}
