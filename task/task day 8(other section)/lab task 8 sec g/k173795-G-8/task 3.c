#include<stdio.h>
void steel();
void  main ()
{
	int H,C,T;
	printf("Enter the hardness: ");
	scanf("%d",&H);
	printf("Enter the Carbon: ");
	scanf("%d",&C);
	printf("Enter the tensile strength: ");
	scanf("%d",&T);
	steel(H ,C ,T);
}
void steel(H, C, T )
{
	if (H>50 && C<70 && T>5600)
	printf("Grade : 10");
	else if (H>50 && C<70)
	printf("Grade : 9");
	else if (C<70 && T>5600)
	printf("Grade : 8");
	else if (H>50 && T>5600)
	printf("Grade : 7");
	else if (H>50 || C<70 || T>5600)
	printf("Grade : 6");
	else 
	printf("Grade : 5");
}
	
	
