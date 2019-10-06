#include<stdio.h>
int func(int *ptr)
{
	int temp;
	temp=*ptr;
	*ptr=((*ptr)*(*ptr)*(*ptr));
	temp=(temp*temp);
	return temp ;
}
void main ()
{
	int num ,res;
	scanf("%d",&num);
	res=func(&num);
	printf("%d\n",res);
	printf("%d",num);
}
