#include<stdio.h>
#include<string.h>
void main ()
{
	char arr[]={"your task is to display the number which is given by user.\0"},*ptr,*ch=NULL;
	int l=0,i=0;
	ptr=arr;
	//scanf("%c",&*ch);
	while(*ptr!=NULL)
	{
		printf("%c",*ptr);
		i=strcmp(ch,ptr);
		if (i==0)
		{
			
			l++;
		}
		*(ptr++);
	}
	printf("\n%d",l);
}
