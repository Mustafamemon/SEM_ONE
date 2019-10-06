#include<stdio.h>
#include<conio.h>
void main ()
{
	int a,b,c ;
	printf("Entr the num:\n");
	scanf("%d %d %d",&a,&b,&c);
	switch (a>b && a>c || a==b || a==c )
	{
		case 1:
		printf("The largest num is %d",a);
		break;
		default :
		switch (b>a && b>c|| a==b || b==c )
		{
			case 1:
			printf("The largest num is %d",b);
			break;
		}
		switch (c>a && b<c )
		{
			case 1:
			printf("The largest num is %d",c);
			break;
		}
		
	}
}
	