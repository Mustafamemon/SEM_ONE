/*#include<stdio.h>
struct num{
	int a ;
	struct num1{
		char name[20] ;
	};
};
void main ()
{
	struct num m ;
	struct num1 n ;
	printf("ENTER");
	scanf("%s",&n.name);
	printf("ENTER");
	scanf("%d",&m.a);
	printf("%s	%d",n.name,m.a);
}*/
/*#include<stdio.h>
typedef struct
	{
	char name[20];
	}l;
typedef struct {
	int pages;
	l m ;
}h;
void main ()
{
	h a ; 
	printf("ENTER");
	scanf("%s",&a.m.name);
	printf("ENTER");
	scanf("%d",&a.pages);
	printf("%s	%d",a.m.name,a.pages);
}*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	printf("How many roll numbers are: ");
	scanf("%d", &n);
	int roll[n], prefix[n];
	printf("Enter all roll no: (You jahil)");
	printf("\nInput Format: (15K-0000)(K is capital keep your eyes open)\n");
	for (i=0; i<n; i++)
	{
		scanf("%dK-%d", &prefix[i], &roll[i]);
		prefix[i]=16;
	}
	printf("\nNext time be careful andhy\n");
	for (i=0; i<n; i++)
	{
		printf("%dK-%d\n",prefix[i],roll[i]);
	}
	
}
