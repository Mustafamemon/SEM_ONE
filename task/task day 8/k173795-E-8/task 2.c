#include<stdio.h>
void marks ();
void main ()
{
	int H,N;
	printf("Enter the marks of Hsc :");
	scanf("%d",&H);
	printf("Enter the marks of Nts :");
	scanf("%d",&N);
	marks (H,N);
}
void marks (int H ,int N)
{
	if(H>70)
	{
		printf("Uni: Karachi University");
	if (N>=70)
	   printf("\nFeild: IT ");
	else if (N>=60)
	   printf("\nFeild: Electronics ");  
	else if (N>=50)
	   printf("\nFeild: Telecomunication "); 
	}
	else if(N>=50)
	{
		printf("Uni: Iqra University");
	if (H>=60 && H<=70)
	   printf("\nFeild: IT ");
	else if (H>=50 && H<=59)
	   printf("\nFeild: Chemical ");  
	else if (H>40 && H<50)
	   printf("\nFeild: Computer ");	
	}
}



