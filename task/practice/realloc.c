#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main ()
{
	int *ptr ,i=0;
	char ch ;
	ptr=(int *)malloc(4);
	scanf("%d",ptr);
	printf("do want to add more :\n");
	while ((ch=getche())!='N')
	{
		i++;
		ptr=(int *)realloc(ptr,(i+1)*4);
		printf("\ndo :\n");
		scanf("%d",(ptr+i));
		printf("Do want to add more :\n");
	}
	int j ;
	printf("\n");
//	for (j=0;j<=i;j++)
	while (i>-1)
	{
		printf("%d\n\n",ptr[i]);
		i--;
	}
}
