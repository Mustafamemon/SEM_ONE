#include<stdio.h>
void main ()
{
	int j,k ,mul=1,div;
	scanf("%d %d",&j,&k);
	while (mul!=0)
	{
		div=j/k;
		mul=j-(div*k);
		j=k;
		k=mul;
	
	}
	printf("%d",j);
}
