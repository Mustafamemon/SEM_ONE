/*#include<stdio.h>
void main ()
{
	int a[100] ,i,j ,k,x =0,n,b=1;
	printf("HOW MANY NUMBER YOU WANT TO ENTER\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		if (x<a[i])
		x=a[i];
	}
	int l= 0 ;
	for (l=0;l<n;l++)
	{
		for (j=2;j<=x;j++)
		{
			if (a[l]%j==0)
			{
				b=b*j ;
				for (k=l;k<n; k++)
				{
					if (a[k]%j==0)
						a[k]/=j ;
				}
				j=1;
			}
		
	}
	printf("LCM = %d",b);
}*/
#include <stdio.h>
void main ()
{
	
	int i=10 ,j=0 ;
	int *p=&i;
	int **const ptr = &p ;
	*ptr=&i ;
	*ptr=&j;         
	//++*p ;
	printf("%d	",**ptr);	
	
}       
