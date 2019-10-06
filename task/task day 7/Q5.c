#include<stdio.h>
void main()
{
	int a;
	printf("Enter The Dialing Code : ");
	scanf("%d",&a);
	switch (a)
	{
		case 1 :
		printf("Country : Pakistan");
		printf("\nCity : Karachi");
		break ;
		case 2 :
		printf("Country : America");
		printf("\nCity : Washington");
		break ;
		case 3 :
		printf("Country : Saudia Arabia");
		printf("\nCity : Riyadh");
		break ;
		case 4 :
		printf("Country : India");
		printf("\nCity : Dehli");
		break ;
		case 5 :
		printf("Country : France");
		printf("\nCity : Paris");
		break ;
		default :
		printf("Invalid code");
	}
	
}
