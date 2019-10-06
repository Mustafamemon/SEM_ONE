#include<stdio.h>
void main ()
{
	int t,n ;
	scanf("%d",&t);
	while (t!=0)
	{
		t--;
		scanf("%d",&n);
		int num[n],i=0,j=0,x=0,k=0,l=0;
		for (i=0;i<n;i++)
		scanf("%d",&num[i]);
		for (i=0;i<n;i++)
		{
			for (j=i+1;j<n;j++)
			{
				l++;
				if (k<(num[i]+num[j]))
				k=(num[i]+num[j]);
			}
		}
		for (i=0;i<n;i++)
		{
			for (j=i+1;j<n;j++)
			{
				if (k==(num[i]+num[j]))
				x++;
			}
		}
		float mean=(double)x/l ;
		printf("%f",mean);
	}
}
