/*#include<stdio.h>
#include<ctype.h>
void main()
{
	int i=0 ;
	char ch[100] ;
	gets(ch);
	while (ch[i]!='\0')
	{
		if (islower(ch[i]))
		{
			ch[i]=toupper(ch[i]);
	 }
		else
		ch[i]=tolower(ch[i]);
		++i ;
	}
	puts(ch);
}*/
/*#include <stdio.h>
void printCharacters( );
int main( void )
{
	char string[] = "print characters of a string";
	printf( "The string is:\n" );
	printCharacters( string );
	printf( "\n" );
	return 0; 
}
void printCharacters( const char *sPtr )
{
	for ( ; *sPtr != '\0'; sPtr++ ) 
	{ 
		printf( "%c", *sPtr );
	}	 
}*/
/*#include <stdio.h>
int main( void )
{
	int x=2; // define x 
	int y=3; // define y 
	int const *ptr = &x;
	*ptr = 7; 
	ptr = &y; 
	printf("%d",*ptr);
	return 0; 
}*/
#include<stdio.h>
void swap (int *ptr ,int *ptr1)
{
	int temp  ;
	temp=*ptr;
	*ptr=*ptr1;
	*ptr1=temp ;
}
void func (int *const ptr, int n )
{
	int i , j ;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-1;j++)
		if (ptr[j]>ptr[j+1])
		{
			swap(&ptr[j],&ptr[j+1]);
		}
	}
}
void main ()
{
	int n , i;
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	scanf("%d",&*(arr+i));
	for (i=0;i<n;i++)
	printf("%d	",*(arr+i));
	func(arr,n);
	printf("\n\n");
	for (i=0;i<n;i++)
	printf("%d	",arr[i]);
}


