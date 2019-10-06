#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int y=0 ,k=0, i;
	char ch2[100];
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
	int l=0 ,g=0;
	g=strlen(ch1);
	while (ch1[i]!='\0')
	{
		for (l=0;l<y;l++)
		{
			if (ch[l]==' ')
			{
			}
			else
			{
				ch2[k]=ch[l];
				if (g==k)
				{
					ch2[k]='\0';
					if (strcmp(ch2,ch1)==0)
					{
						printf("%s",ch2);
						break ;	
					}
					else
					k=0 ;
				}
				k++;	
			}
		}
		i++ ;
	}
}
