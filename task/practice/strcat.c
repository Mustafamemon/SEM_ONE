#include<stdio.h>
#include<string.h>
/*void main ()
{
	char dest[1000],sor[100];
	int res ;
	int i ;
	printf("ENTER\n");
	gets(dest);
	gets(sor) ;
	res=strncmp(dest,sor,2);
	printf("%d",res);
}*//*
#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str2, "AbcD");
   strcpy(str1, "abcD");

   ret = strncmp(str1, str2, 4);

   if(ret < 0) {
    printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}
*/
int main(void)
{ 
  char s[]= {"sin 2 x "};
char *a,*b ;
a=strtok(s," ");
b=strtok(NULL," ");
printf("%s",a);
printf("\n%s",b);
int x ;
if ((strcmp(a,"sin"))==0)
printf("HEL");
x = (int)*b-48;
printf("\n%d",x);
return 0 ;
}

