#include<stdio.h>
void read();
void main ()
{
	int x; 
	read (x);

}
void read(x)
	{
	int i=0;  
	printf("Enter the positive integer :",x);
	scanf("%d",&x);
	while(x>1)
{
	i++;
	if(x%2==0)
	printf("\nNext value %d",x/=2);
	else 
	printf("\nNext value %d",x=(x*3)+1);
	}
	printf("\nFinal Value %d Number of step %d",x,i);
}
