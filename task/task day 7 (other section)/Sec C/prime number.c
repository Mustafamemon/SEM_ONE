#include<stdio.h>   
void main()  
{  
int n,i,pri,a=0;  
printf("Enter the number:");  
scanf("%d",&n);    
for(i=2;i<n;i++)  
{ 
if(n%i==0) 
{
	a=1;
}
}
if (a==1) 
printf("Number is not prime");    
else   
printf("Number is prime");   
}




