#include<stdio.h>
#include<string.h>
int main ()
{
	char dest[1000],sor[100];
	int i , j=0 ;
	gets(dest);
	gets(sor) ;
	if (strcmp(sor,dest)==0)
	{
		return 0 ;
	}
	else 
	{
	for (i=0;i<7;i++)
	{
		if (dest[i]!=sor[i])
		{
			j++ ;
			printf("%d	%d	%d\n",(dest[i]-sor[i]),dest[i],sor[i]);
			printf("%c	%c	%c\n",(dest[i]-sor[i]),dest[i],sor[i]);
		}
		if (j==2)
		break ;
	}	
}
}
