4#include<stdio.h>
void main ()
{
	int n,i,j,k,sum,temp,a;
	printf("Enter the number : ");
	scanf("%d",&n);
	for (i=n;i>1;i--)
	{
		for (j=1;j<n;j++)
		{
		sum=i+j;
		if (sum==n)	
		{
			temp=i;
			printf("%d %d\n",i,j);
		}
		}
	}
	for (j=temp;j>=1;j--)
	{
		for (k=1;k<temp;k++)
		{
		sum=k+j;
		if(sum==temp)
		printf("%d %d %d\n",temp,j,k);	
		}
	}
	}
	/*for (j=a;j<=1;j++)
		{
			for (k=1;k<a;k++)
			{
			sum=a+k+j;
			a=j;
			if(sum==n)
			printf("%d %d %d %d\n",a,j,k);	
			}
		}	
		}*/
		

