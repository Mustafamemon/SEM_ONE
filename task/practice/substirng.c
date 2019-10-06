#include<stdio.h>
void substringfunc(int a ,char ch[100]);
void main ()
{
	char ch[]={" A Sentence is a group of clauses or words, conveying a complete meaning. "};
	printf("%s\n",ch);
	int len ;
	printf("Enter the length\n");
	scanf("%d",&len);
	substringfunc(len,ch);
}
void substringfunc(int a ,char ch[100])
{
	int b[100]={0},i=0,j=0;
	while (ch[i]!='\0')
	{
		if (ch[i]!=' ')
		{
			b[j]++;
		}
		else
		j++;
		i++;
	}
	int l=0,k,o=0;
	for (l=0;l<=j;l++)
	{
		if (a==b[l])
		{
			for (k=o;k<=o+a;k++)
			printf("%c",ch[k]);
		}
		o=o+b[l]+1;
	}
}
