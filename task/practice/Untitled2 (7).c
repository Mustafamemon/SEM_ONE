#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int i ;
	void **ptr;
	ptr=(void **)malloc(3*sizeof(void*));
	*(ptr+0)=(char *)malloc(3*sizeof(char));
	*(ptr+1)=(int *)malloc(3*sizeof(int));
	*(ptr+2)=(float *)malloc(3*sizeof(float));
	scanf("%c",&ptr[0][0]);
	scanf("%d",&ptr[1][0]);
	scanf("%f",&ptr[2][0]);
	printf("%c\n",&ptr[0][0]);
	printf("%d\n",&ptr[1][0]);
	printf("%.2f\n",&ptr[2][0]);
}
