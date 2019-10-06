#include<stdio.h>
void main ()
{
	int n=0,i,j,*ptr,x=0,a;
	scanf("%d",&n);
	int num[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	ptr=num;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-1;j++)
		{
			if (*(ptr+i)>*(ptr+j))
			{
				x=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=x;
			}
		}
	}
	for (i=n-1;i>=0;i--)
	{
		printf("%d	",*(ptr+i));
	}
	scanf ("%d",&a);
	for (i=0;i<n;i++)
	{
		for (j=i;j<=n;j++)
		{
			if (a>*(ptr+j))
			{
				x=a;
				a=*(ptr+j);
				*(ptr+j)=x;
			}
		}
	}
	for (i=n;i>=0;i--)
	{
		printf("%d	",*(ptr+i));
	}
}
