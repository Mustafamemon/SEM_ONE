#include<stdio.h>
#include<stdlib.h>
int func(char *ch ,char *ch1 ,char ch2[10][100] ,int i,int j,int l,int k)
{
	if (ch[i]!='\0')
	{
		if (ch[i]==' ')
		{
			ch2[k][l]='\0';
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
		return func(ch,ch1,ch2,i,j,l,k);
	}
	l-- ;
	ch2[k][l]='\0';
	return k ;
}
void main ()
{
	int y=0 ,k , i;
	char ch2[100][100];
	char *ch,ch1[100];
	printf("ENTER\n");
	ch=(char *)malloc(sizeof(char));
	scanf("%c",&ch[y]);
	while (ch[y]!='\n')
	{
		y++;
		ch=(char *)realloc(ch,(1+y)*sizeof(char));
		scanf("%c",&ch[y]);
	}
	printf("Entr find\n");
	gets(ch1);
	k=func(ch,ch1,ch2,0,0,0,0);
	for (i=0;i<=k;i++)
	{
		if (strcmp(ch1,ch2[i])==0)
		{
			printf("%s",ch1);	
			y=0;
			break ;
		}
	} 
	if (y!=0)
	printf("NOT FOUND");
}
