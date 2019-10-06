#include<stdio.h>
#include<conio.h>
void main ()
{
	int i=0,g=0,k=0,j=0,s=0,l=0,v=0,x,tot=0,a=0;
	char ch ;
	while (ch!='\n')
	{
		scanf("%c",&ch);
		if(ch=='m')
		{
			i++;
		}
		if(ch=='d')
		{
			j++;
		} 
		if(ch=='c')
		{
			k++;
		}
		if(ch=='l')
		{
			l++;
		}
	 
		if(ch=='x')
		{
			g++;
		} 
		if(ch=='v')
		{
			v++;
		} 
		if(ch=='i')
		{
			s++;
		}
		tot=(i*1000)+(j*500)+(k*100)+(l*50)+(g*10)+(v*5)+(s*1);
	}
		printf("\n%d",tot);
	
}
