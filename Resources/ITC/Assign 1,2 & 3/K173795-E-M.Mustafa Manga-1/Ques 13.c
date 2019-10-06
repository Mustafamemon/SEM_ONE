#include<stdio.h>
void main ()
{
	int i,a=0,j=0;
	char name[a],myname[a];
	printf("Number of letters ");
	scanf("%d",&a);
	a=a+1;
	printf("Enter the name ");
	for (i=0;i<a;i++)	
	{
		scanf("%c",&name[i]);
	}	
	j=a;
	for (i=0;i<a;i++)
	{
		myname[j]=name[i];
		j--;
		printf("%c",myname[j]);
	}
	
}
