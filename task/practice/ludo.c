#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void func ();
void main ()
{
	int a , b ;
	srand ( time(NULL) );
	a= rand() % 6 ;
	b = rand() % 6 ;
	if (a<0 )
	a=a+1;
	if (b<0 )
	b=b+1;
	printf("%d %d\n",a,b);
	func (a,b);
}
void func (int a,int b)
{
	int i,sum ,point,flag=1;
	sum=a+b;
	if (sum==7 || sum==11)
	printf("Player Win");
	else if (sum==2 || sum==3 || sum==12)
	printf("Player Losses");
	else if (sum==4 || sum==5 || sum==6 || sum==8 || sum==9 || sum==10)
	{
		point=sum ;
		for (i=0;i<7;i++)
		{
			sum=0;
			srand ( time(NULL) );
			a= rand() % 6 ;
			b = rand() % 6 ;
			if (a<0 )
				a=a+1;
			if (b<0 )
				b=b+1;
			printf("%d %d\n",a,b);
			sum=a+b;
		if (sum==point)				
		{
			printf("Player Win");
			flag=0;
			break ;
		}
	}
	if (flag==1)
		printf("Player Losses");
	}
}
