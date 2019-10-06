#include<stdio.h>
#include<string.h>
void main ()
{
	char nam[50],ch[]={'a','e','i','o','u'},*ptr;
	int i=0,l=0,k=0,j;
	gets(nam);
	ptr=nam;
	while (ptr[i]!='\0')
	{
		for (j=0;j<5;j++)
		{
			if (ptr[i]==ch[j])
			{
				l++;
			}	
		}
		i++;		
	}
	k=i-l;
	printf("\n Vowels= %d",l);
	printf("\n Consonants= %d",k);
}
