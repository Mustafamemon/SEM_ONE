#include<stdio.h>
void  printit ( float a,char ch ) ;
main( ) 
{ 
 float a =15.5 ;   char ch = 'C' ;
    printit ( a,ch ) ;  
} 
 
void  printit ( float a,char ch ) 
{  
   printf ( "\n%f \n%c", a, ch ) ; 
}
