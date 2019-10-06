#include<stdio.h>
#include<string.h>
void main ()
{
	int n
	,i,a,j;
	char name[n][8],temp[n];
	printf("Number strings ");
	scanf("%d",&n);
	printf("Enter the strings\n");
	for (i=0;i<n;i++)
	{
		scanf("%s",name[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
		a=strcmp(name[j],name[j+1]);
		if (a>0)
		{
			strcpy(temp,name[j]);
			strcpy(name[j],name[j+1]);
			strcpy(name[j+1],temp);
		}
		}
	}
	for (i=0;i<=n;i++)
	{
		printf("\n%s",name[i]);
	}
}
