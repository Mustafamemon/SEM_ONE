#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main ()
{
	int a[]={10,9,3,2,4,2};
	int *ptr,*ptr1 ,i=0;
	ptr=(int*)malloc (sizeof (int));
	scanf("%d",ptr);
	char ch;
	do 
	{
		if (getche()=='Y')
		{printf("jkjds\n");
			scanf("%d",ptr);
			i++;
			ptr=(int*)realloc(ptr,(i+1)*sizeof(int));
			
		}
	}
	while (getche()!='N');
	printf("%d",i);
	while (i!=0)
	{
		i--;
		printf("%d\n",*(ptr+i));
	}
//	int a=6;
/*	ptr=&a[1];
	ptr1=&a[5];
	printf("%u\n",&a[1]);
	printf("%u\n",&a[5]);
	printf("%x\n",&a[1]);
	printf("%x\n",&a[5]);
	
	printf("%d\n",ptr-ptr1);
	printf("%d\n",*ptr);
	printf("%d\n",&a);
	printf("%d\n",&ptr);
	int A=0;
	++ptr
	;ptr=&A;
	printf("%d\n",ptr);*/
}

	
