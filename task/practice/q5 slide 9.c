#include<stdio.h>
 void main ()
 {
 	int num, rev=0 ,sum=0 ,a,b,x ;
 	printf ("ente the num");
 	scanf ("%d",&num);
 	while (num!=0)
 	{
 		b=num%10;
 		if(b%2==0)
 		{
		 b=b+1;
	}
 		rev=(rev*10)+b;
 		num/=10;
 	}
 	while (rev!=0)
 	{
 		b=rev%10;
 	//	x=b+1;
 		sum=(sum*10)+b;
 		rev/=10;
 	}
 	printf("%d",sum);
 }
