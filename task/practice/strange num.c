#include<stdio.h>
void main()
{
	int l,r,i,x=0,p,j=0,n,k=0,q=0,y;
	scanf("%d",&n);
	while (k!=n)
	{
		j=0;
		k++;
	scanf("%d %d",&l,&r);
	for (i=l;i<=r;i++)
	{
		if (i<=9)
		j++;
		else 
		{
			x=i;
			while (x>9)
			{
				q=0;
				y=x;
				while (y!=0)
				{
					y=y/10;
					q++;
				}
			if (x%q==0)
				{
					x=x/q;
					p=1;
				}
				else
					p=0;
				if (p==0)
				break;
			
			}
		if (p==1)
		j++;
		}		
		}
		printf("\nOutput:\n\n%d\n\n",j);
	}
		
	}
