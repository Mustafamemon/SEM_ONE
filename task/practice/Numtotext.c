#include<stdio.h>
#include<conio.h>
void main ()
{
	int a ,b ,c, rem, num,d ;
	printf("Enter The Three Digit Number :\n");
	scanf("%d",&num);
	rem=num%10;
	a=rem ;
	num=num/10;
	rem=num%10;
	b=rem ;  
	num=num/10;
	rem=num%10;
	c=rem ;
	d=(b*10)+a ;
	switch(c)
	{
		case 1:
			printf("one hundered");
			break ;
		case 2:
			printf("two hundered");
			break ;
		case 3:
			printf("three hundered");
			break ;	
		case 4:
			printf("four hundered");
			break ;	
		case 5:
			printf("five hundered");
			break ;
		case 6:
			printf("six hundered");
			break ;	
		case 7:
			printf("seven hundered");
			break ;
		case 8:
			printf("eight hundered");
			break ;
		case 9:
			printf("nine hundered");
			break ;							
	}
	printf(" and ");
	switch(b)
	{
		case 0:
			printf("");
			break ;
	}
	switch(d)
	{
		case 10:
			printf("ten");
			break;
		case 11:
			printf("eleven");
			break;
		case 12:
			printf("twelve");
			break;
		case 13:
			printf("thirteen");
			break;
		case 14:
			printf("fourteen");
			break;
		case 15:
			printf("fifteen");
			break;	
		case 16:
			printf("sixteen");
			break;
		case 17:
			printf("seventeen");
			break;
		case 18:
			printf("eighteen");
			break;
		case 19:
			printf("nineteen");
			break;
		case 20:
			printf("twenty");
			break;
		case 21:
			printf("twenty one");
			break;
		case 22:
			printf("twenty two");
			break;								
		case 23:
			printf("twenty three");
			break;
		case 24:
			printf("twenty four");
			break;
		case 25:
			printf("twenty five");
			break;
		case 26:
			printf("twenty six");
			break;
		case 27:
			printf("twenty seven");
			break;
		case 28:
			printf("twenty eight");
			break;
		case 29:
			printf("twenty nine");
			break;
		case 30:
			printf("thirty");
			break;
		case 31:
			printf("thirty one");
			break;
		case 32:
			printf("thirty two");
			break;
		case 33:
			printf("thirty three");
			break;
		case 34:
			printf("thirty four");
			break;
		case 35:
			printf("thirty five");
			break;
		case 36:
			printf("thirty six");
			break;
		case 37:
			printf("thirty seven");
			break;	
		case 38:
			printf("thirty eight");
			break;
		case 39:
			printf("thirty nine");
			break;
		case 40:
			printf("forty");
			break;
		case 41:
			printf("forty one");
			break;
		case 42:
			printf("forty two");
			break;
		case 43:
			printf("forty three");
			break;
		case 44:
			printf("forty four");
			break;								
		case 45:
			printf("forty five");
			break;
		case 46:
			printf("forty six");
			break;
		case 47:
			printf("forty seven");
			break;
		case 48:
			printf("forty eight");
			break;
		case 49:
			printf("forty nine");
			break;
		case 50:
			printf("fifty");
			break;
		case 51:
			printf("fifty one");
			break;
		case 52:
			printf("fifty two");
			break;
		case 53:
			printf("fifty three");
			break;	
		case 54:
			printf("fifty four");
			break;
		case 55:
			printf("fifty five");
			break;	
		case 56:
			printf("fifty six");
			break;
		case 57:
			printf("fifty seven");
			break;
		case 58:
			printf("fifty eight");
			break;
		case 59:
			printf("fifty nine");
			break;
		case 60:
			printf("sixty ");
			break;
		case 61:
			printf("sixty one");
			break;
		case 62:
			printf("sixty two");
			break;								
		case 63:
			printf("sixty three");
			break;
		case 64:
			printf("sixty four");
			break;
		case 65:
			printf("sixty five");
			break;
		case 66:
			printf("sixty six");
			break;
		case 67:
			printf("sixty seven");
			break;
		case 68:
			printf("sixty eight");
			break;
		case 69:
			printf("sixty nine");
			break;
		case 70:
			printf("seventy");
			break;
		case 71:
			printf("seventy one");
			break;
		case 72:
			printf("seventy two");
			break;
		case 73:
			printf("seventy three");
			break;
		case 74:
			printf("seventy four");
			break;
		case 75:
			printf("seventy five");
			break;
		case 76:
			printf("seventy six");
			break;
		case 77:
			printf("seventy seven");
			break;	
		case 78:
			printf("seventy eight");
			break;
		case 79:
			printf("seventy nine");
			break;
		case 80:
			printf("eighty");
			break;
		case 81:
			printf("eighty one");
			break;
		case 82:
			printf("eighty two");
			break;
		case 83:
			printf("eighty three");
			break;
		case 84:
			printf("eighty four");
			break;								
		case 85:
			printf("eighty five");
			break;
		case 86:
			printf("eighty six");
			break;
		case 87:
			printf("eighty seven");
			break;
		case 88:
			printf("eighty eight");
			break;
		case 89:
			printf("eighty nine");
			break;
		case 90:
			printf("ninty");
			break;	
		case 91:
			printf("ninty one");
			break;
		case 92:
			printf("ninty two");
			break;
		case 93:
			printf("ninty three");
			break;
		case 94:
			printf("ninty four");
			break;								
		case 95:
			printf("ninty five");
			break;
		case 96:
			printf("ninty six");
			break;
		case 97:
			printf("ninty seven");
			break;
		case 98:
			printf("ninty eight");
			break;
		case 99:
			printf("ninty nine");
			break;													
		default :	
		switch(a)
	{
		case 0:
			printf(" ");
			break ;
		case 1:
			printf("one");
			break ;
		case 2:
			printf("two");
			break ;
		case 3:
			printf("three");
			break ;	
		case 4:
			printf("four");
			break ;	
		case 5:
			printf("five");
			break ;
		case 6:
			printf("six");
			break ;	
		case 7:
			printf("seven");
			break ;
		case 8:
			printf("eight");
			break ;
		case 9:
			printf("nine");
			break ;						
	}
	}
	
}
