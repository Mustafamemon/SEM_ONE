#include<stdio.h>
#include <stdlib.h>
int main ()
{
	int i=0,j,row,col;
	char *ch ;
	ch=(char *)malloc(1);
	printf("ENTER THE STRING:\n");
	scanf("%c",&ch[i]);
	while (ch[i]!='\n')
	{
		i++;
		ch=(char *)realloc(ch,(1+i));
		scanf("%c",&ch[i]);
	}
	j=0 ;
	while (ch[j]!='\0')
	{
		printf("%c",*(ch+j));
		j++ ;
	}
//	puts(ch);
}
