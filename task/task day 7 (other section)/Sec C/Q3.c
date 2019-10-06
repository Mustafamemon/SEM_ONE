#include<stdio.h>
void main ()
/*{
  int i, sum = 0; 
  for (i = 1; i <=100; i++) 
 {        
  	sum = sum + i;
} 
  printf("%d",sum); 
}*/
/*nt f = 0, g = 1,i; 
for (i = 0; i <= 15; i++)
 { 
  	printf("%d",f);
    f = f + g;   
	 g = f - g; 
} 

}*/
/*
{
	int i = 0, n = 20;
	for (; i < n; i++)    
  	printf("x"); 
}*/
/*{
	int n = 123456789 ,m = 0;    
 	while (n != 0) 
	 	{   
	 	 	m = (10 * m) + (n % 10);
		  	 n = n / 10;
	 	}
		 printf("%d %d",n,m) ; 
}*/
{
	int i, j,N=9; 
for (i = 0; i < N; i++) 
   {
    if (i != j && j < N) 
{
	printf( "%d %d" ,j,i );  
}	
   for ( i = 0; i < N; i++)
    for (j = 0; i!=j;j++)
	 
	         
	printf("%d %d " ,j,i); 
	}
}   
