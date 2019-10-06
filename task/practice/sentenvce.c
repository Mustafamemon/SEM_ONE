#include<stdio.h>
#include<string.h>
void main ()
{
	int i=0,j,a[10];
	char ar[100][100];
//	
	while (i!=3)
{	
	scanf("%[^.^!^?]s",ar[i]);
	a[i]=strlen(ar[i]);
		printf("%d\n",a[i]);
	scanf("%[^.^!^?]s",ar[i++]);
	a[i]=strlen(ar[i]);
		printf("%d\n",a[i]);
	scanf("%[^.^!^?]s",ar[i++]);
//	gets(ar[i]);
	a[i]=strlen(ar[i]);
	printf("%d\n",a[i]);
}
	
	
}

