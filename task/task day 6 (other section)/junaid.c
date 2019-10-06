#include<stdio.h>
#include<conio.h>
main ()
{int a=0,b=0,c=0,d=0,e=0;
printf("Enter any 5 Numbers ");
scanf(" %d%d%d%d%d",&a,&b,&c,&d,&e);
		if (b<a && b>c&&b>d&&b>e)
		{printf("%d is the Second largest",b);
		}
		else if (c<a && c>b&&c>d&&c>e)
		{printf("%d is the Second largest",c);
		}
		else if (d<a && d>b&&d>c&&d>e)
		{printf("%d is the Second largest",d);
		}
		else if (e<a && e>b&&e>c&&e>d)
		{printf("%d is the Second largest",e);
		}
		if (a<b && a>c&&a>d&&a>e)
		{printf("%d is the Second largest",a);
		}
		else if (c<b && c>a&&c>d&&c>e)
		{printf("%d is the Second largest",c);
		}
		else if (d<b && d>a&&d>c&&d>e)
		{printf("%d is the Second largest",d);
		}
		else if (e<b && e>a&&e>c&&e>d)
		{printf("%d is the Second largest",e);
		}
		if (a<c && a>c&&a>d&&a>e)
		{printf("%d is the Second largest",a);
		}
		else if (b<c && b>a&&b>d&&b>e)
		{printf("%d is the Second largest",b);
		}
		else if (d<c && d>a&&d>b&&d>e)
		{printf("%d is the Second largest",d);
		}
		else if (e<c && e>b&&e>a&&e>d)
		{printf("%d is the Second largest",e);
		}
		if (a<d && a>c&&a>b&&a>e)
		{printf("%d is the Second largest",a);
		}
		else if (b<d && b>a&&b>d&&b>e)
		{printf("%d is the Second largest",b);
		}
		else if (c<d && c>b&&c>a&&c>e)
		{printf("%d is the Second largest",c);
		}
		else if (e<d && e>b&&e>c&&e>a)
		{printf("%d is the Second largest",e);
		}
		if (a<e && a>c&&a>d&&a>b)
		{printf("%d is the Second largest",a);
		}
		else if (b<e && b>a&&b>d&&b>c)
		{printf("%d is the Second largest",b);
		}
		else if (c<e && c>b&&c>a&&c>d)
		{printf("%d is the Second largest",c);
		}
		else if (d<e && d>b&&d>c&&d>a)
		{printf("%d is the Second largest",d);
		}
	
return 0;
getch();
}
