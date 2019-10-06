#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void main ()
{
	char *ptr[7]={"mustafa","aqsa","fatima","hasnain","rafiq","marium"};
	int i,j ;
	char *tem ;
	for (i=0;i<6;i++)
	{
		for (j=0;j<5;j++)
		{
			if (strcmp(*(ptr+j),*(ptr+j+1))>0)
				{
					tem=*(ptr+j);
					*(ptr+j)=*(ptr+j+1);
					*(ptr+j+1)=tem;
				}		
		}
	}
	for (i=0;i<6;i++)
	{
	printf("%s",*(ptr+i));
	printf("\n")	;	
	}
}
