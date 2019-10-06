#include<stdio.h>
#include<math.h>
void func (int *x)
{
	int i,j,num[100],sum=0,mean,add=0,sub[10];
	for (i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	mean=sum/10;
	for (i=0;i<10;i++)
	{
		sub[i]=pow((num[i]-mean),10);
		add+=sub[i];
	}
	*x=sqrt(add/9);
}
int main ()
{
	int x1=0;
	func(&x1);
	printf("%d	",x1);
}
