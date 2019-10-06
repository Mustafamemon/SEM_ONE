#include<stdio.h>
#include<string.h>
void main ()
{
	int i,j,k=0,l;
	scanf("%d",&l);
	char str[l][100];
	int a[l];
	for (i=0;i<l;i++)
	{
		scanf("%s",&str[i]);
		a[i]=strlen(str[i]);
		if (k<a[i])
		k=a[i];
	}
	for (i=0;i<k;i++)
	{
		for (j=0;j<l;j++)
		printf("%c",str[j][i]);
		printf(" ");
	}
	
}
