#include<stdio.h>
int even (int n,int *ptr)
{
	int sum=0,i;
	for (i=0;i<n;i+=2)
	{
		sum+=*(ptr+i);
	}	
	return sum ;
}
int odd (int n,int *ptr1)
{
	int sum=0,i;
	for (i=1;i<n;i+=2)
	{
		sum+=*(ptr1+i);
	}
	return sum;
}
void sortarr(int n , int *sor)
{
	int i , j , temp ;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-1;j++)
		{
			if (*(sor+i)>*(sor+j))
			{
				temp=*(sor+i);
				*(sor+i)=*(sor+j);
				*(sor+j)=temp;
			}
		}
	}
	
}
int main ()
{
	int n,res,res1,i;
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	res=even (n,arr);
	res1=odd (n,arr);
	sortarr(n,arr);
	for (i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEven=%d\nOdd=%d",res,res1);
}
