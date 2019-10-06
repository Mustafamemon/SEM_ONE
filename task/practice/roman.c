#include<stdio.h>
int func(int y ,int k , char ch )
{
	int i,j ;
	if (y==4)
	{
		printf("iv");
		return (y%4);
	}
	if (y==9)
	{
		printf("ix");
		return (y%9);
	}
	j=y/k ;
	for (i=0;i<j;i++)
	{
		printf("%c",ch);
	}
	return (y-k*j);
}
void main ()
{
	int y ;
	scanf("%d",&y);
	y=func(y,1000,'m');
	y=func(y,500,'c');
	y=func(y,100,'d');
	y=func(y,50,'l');
	y=func(y,10,'x');
	y=func(y,5,'v');
	y=func(y,1,'i');
}

