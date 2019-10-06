#include<stdio.h>
#include<string.h>
void name();
void main ()
{
	int i=0;
	char ch[100];
	name (0,ch);
}
void name (int i ,char ch[100])
{
	int j;
	scanf("%[^\n]s",ch);
	i=strlen(ch);
	for (j=0;j<i;j++)
	{
		if(ch[j]>64 && ch[j]<91)
		{
			ch[j]=ch[j]+32;
		}
		else if(ch[j]>96 && ch[j]<123)
		{
			ch[j]=ch[j]-32;
		}
		printf("%c",ch[j]);
	}
}

