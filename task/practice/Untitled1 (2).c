
#include<stdio.h>
#include<stdlib.h>
/*typedef struct 
{
	char name[20];
	char sec;
	int marks;
}stu;
stu *input(int i)
{
	stu *ptr;
	ptr=(stu*)malloc(i*sizeof(stu));
	int j;
	for(j=0;j<i;j++)
	{
		fflush(stdin);
		printf("Enter stu name:\n");
		gets(ptr[j].name);
		fflush(stdin);
		printf("Enter stu section:\n");
		scanf("%c",&ptr[j].sec);
		fflush(stdin);
		printf("Enter stu marks:\n");
		scanf("%d",&ptr[j].marks);
		fflush(stdin);
	}
	return ptr; 
}
int main()
{
	stu *ptr;
	int i,k;
	printf("Enter the value of i:\n");
	scanf("%d",&i);
	ptr=input(i);
	for(k=0;k<i;k++)
	{
		printf("\nstudent name:\n");
		printf("%s",ptr[k].name);
		printf("\nstudent section:\n");
	    printf("%c",ptr[k].sec);
        printf("\nstudent marks:\n");
        printf("%d",ptr[k].marks);
	}
}*/
/*#include <stdio.h>
#include <string.h>
#include <errno.h>

int main () {
   FILE *fp;

   fp = fopen("file.txt","r");
   if( fp == NULL ) {
      printf("Error: %s\n", strerror(errno));
   }
   
   return(0);
}*/
/* #include <stdio.h>
#include <string.h>
char main () {
   char *len;
   const char str1[] = "MUST AFA MAN GA";
   const char ch2 = 'M' ;
   len = strrchr(str1, ch2);

   printf("%s\n", len );
   
   return(0);
}*/
#include <stdio.h>
#include <string.h>

/*int main () {
   const char str1[] = "mustafa";
   const char str2[] = "tafas";
   char *ret;

   ret = strpbrk(str1, str2);
   if(ret) {
      printf("First matching character: %c\n", *ret);
   } else {
      printf("Character not found");
   }
   
   return(0);
}*/
/*#include <stdio.h>
#include <string.h>
#include <errno.h>

int main () {
   FILE *fp;

   fp = fopen("file.txt","r");
   if( fp == NULL ) {
      printf("Error: %s\n", strerror(errno));
   }
   
   return(0);
}
size_t */
 /*  #include<stdio.h>
void fun(int arr[])
{
  int i;
  printf("%d\n", sizeof(arr));
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  arr_size=4;
  for (i = 0; i < arr_size; i++)
      printf("%d ", arr[i]);

printf("\n%d", sizeof(arr));
}
int main()
{
  int i;
  int arr[4] = {10, 20 ,10, 40};
  fun(arr);
  return 0;
} */
/*int main()
{
   int a = 300;    
   char *b = (char *)&a;
	*++b = 2;
   printf("%d ",a);
   return 0;
}*/
