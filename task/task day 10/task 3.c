#include<stdio.h>
int func(char b[10],char a[10])
{
	int i;
	for (i=0;i<10;i++)
	{
		b[i]=a[i];
	}
	for (i=0;i<10;i++)
	{
		if (b[i]!=a[i])
		return 0;
		else
		return 1;
	}
}
void main ()
{
	char src[10],dest[10];
	gets(src);
	func (dest,src);
}
	
