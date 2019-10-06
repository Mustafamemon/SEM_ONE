#include<stdio.h>
#include<string.h>
void main ()
{
	char ch[50];
	int n,i=0,flag=0,a=0,k,j;
	scanf("%d",&n);
	while (i!=n)
	{
		scanf("%s",ch);
		a=strlen(ch);
		k=a-1;
		for (j=0;j<(a/2);j++)
		{
			if (ch[j]==	'{' && ch[k]=='}' || ch[j]=='['&& ch[k]==']'|| ch[j]==	'(' && ch[k]==')')
			{    
				flag=1;
			}	
			else
			{
				flag=0;
			}
				k--;
			if (flag==0)
			break;
	}
	if (flag==0)
	printf("NO\n");
	else
	printf("YES\n");
	i++;
	}
}
	
