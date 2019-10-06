#include<stdio.h>
#include<string.h>
void main ()
{
	char stri[100],ch[52]={"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	int arr[52]={0},a[51]={0},y=0,k=0,i,j,x;
	gets(stri);
	x=strlen(stri);
	for (i=0;i<x;i++)
	{
		for (j=0;j<=51;j++)
		{
		if (stri[i]==ch[j])
		{
			arr[j]=arr[j]+1;
		}
		}
	}
	for (j=0;j<=51;j++)
	{
		if (k<arr[j])
		{
			k=arr[j];
		}	
	}
	for (i=0;i<=51;i++)
	{
		if (k==arr[i])
		{
			y++;
			a[y]=i;
		}	
	}
	for (j=1;j<=y;j++)
	{
		printf("%c ",ch[a[j]]);
	}
}
