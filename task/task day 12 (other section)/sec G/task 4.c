#include <string.h>
#include <stdio.h>

int main () {
   char str[80] = "safiabaloch";
   const char s[10] = "shaherbano";
   char *token;
   token = strtok(str, s);
   while( token != NULL ) {
      printf( " %s\n", token );
    token = strtok(NULL, s);
   }
   
   return(0);
}
