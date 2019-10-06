#include<stdio.h>
void substr(int a ,int b ,char ch[10]);
void main ()
{
	int sp, len ;
	char ch[1000];
	printf("ENTER THE STRING\n");
	gets(ch);
	printf("%s\n",ch);
	printf("Enter The Starting Point : ");
	scanf("%d",&sp);	
	printf("Enter The Ending Point : ");
	scanf("%d",&len);
	substr(sp,len,ch);
}
void substr (int a ,int b ,char ch[])
{
	a--;
	b--;
	int i ;
	for (i=a;i<=b;i++)
	{
		printf("%c",ch[i]);
	}	
}
