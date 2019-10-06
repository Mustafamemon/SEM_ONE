#include <string.h>
#include <stdio.h>
#include<stdlib.h>

/*int main () {
	char str[80] = "rustafamanaga";
    char s[20] = "rafiq";
    char *token;
    token = strtok(str, s);
    while( token != NULL ) 
	{
    printf( "%s ", token );
    token = strtok(NULL, s);
	}
   return(0);
}*/
/*#include <string.h>
#include <stdio.h>

int main () {
   char str[80] = "This is - www.tutorialspoint.com - website";
   const char s[20] = "iw.ictu";
   char *token;
   
   /* get the first token 
   token = strtok(str, s);
   
   /* walk through other token 
   while( token != NULL ) {
      printf( " %s\n", token );
    
      token = strtok(NULL, s);
   }
   
   return(0);
}*/
int main(int argc, char* argv[]){
int** A;
A = (int**)malloc(sizeof(int*));
foo(&A);
return 0;
}
foo(int*** array){
	int n , i;
	scanf("%d",&n);
int** arrayint = (int**)malloc((2*n)*sizeof(int*));
for (i=0;i<n;i++)
arrayint[i] = (*array)[i];
free(*array);
array = &arrayint;
}

