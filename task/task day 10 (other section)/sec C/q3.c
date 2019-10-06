#include<stdio.h>
void main ()
{
	char ch[1000],ch1[100],ch2[100][100];
	printf("ENTER\n");
	gets(ch);
	printf("Entr find\n");
	gets(ch1);
	int i=0,k=0,l=0 ;
	while (ch[i]!='\0')
	{
		if (ch[i]==' ')
		{
			i++ ;
			l=0 ;
			k++;
		}
		else
		{
			ch2[k][l]=ch[i] ;
			l++ ;
			i++;
		}
	}
	l=0 ;
	for (i=0;i<=k;i++)
	{
		if (strcmp(ch1,ch2[i])==0)
		{
			l++ ;	
		}
	}
	printf("\nOccurrence = %d ",l );
}
