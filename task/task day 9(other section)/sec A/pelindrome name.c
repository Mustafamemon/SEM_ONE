#include<stdio.h>
#include<string.h>
void main ()
{
	int i,a=0,j=0;
	char name[10],myname[10];
	printf("Enter the stirng ");
	scanf("%s",name);
	strcpy(myname,name);
	strrev(myname);
	a=strcmp(myname,name);
	if (a==0)
	printf("string is pelindrome");
	else
	printf("string is not pelindrome");
}

