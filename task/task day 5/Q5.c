#include<stdio.h>
int main ()
{
	int L, B, A, P =0 ; //L=length , B=breath, A=area, P=perimeter 
	printf("Enter Length :\n");
	scanf("%d", &L);
	system ("cls");
	printf("Enter Breath :\n");
	scanf("%d", &B);
	system ("cls");
	A=L*B;
	P=2*(L+B);
	printf("The Area And Perimeter Of Rectangele With Length = %d and Breadth = %d are \nrespectively %d and %d meter",L, B, A, P);
	return  0 ;
}

