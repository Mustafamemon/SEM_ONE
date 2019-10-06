#include<stdio.h>
int main ()
{
	int L, B, A, P =0 ; //L=length , B=breath, A=area, P=perimeter 
	printf("Enter Length :\n");
	printf("Enter Breath :\n");
	A=L*B;
	P=2*(L+B);
	printf("The Area And Perimeter Of Rectangele With Length =%d and Breadth =%d \nare respectively %d and %d meter",&L, &B, A, P);
	return  0 ;
}

