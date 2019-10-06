#include<stdio.h>
addmult ( int ii, int jj ) ;
addmult1 ( int ii, int jj ) ;
main( ) 
{  
 int i = 3, j= 4  ; 
 printf ("\n%d ", addmult ( i, j ) );
 printf ("\n%d ", addmult1 ( i, j ) );
   
} 
addmult ( int ii, int jj ) 

{  
	return  ii + jj; 
}
int addmult1 ( int ii, int jj )
	{
		return  ii * jj;
	}

 

