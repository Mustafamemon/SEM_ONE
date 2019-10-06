#include<stdio.h>
void main ()
{
	char ch[100];
	int u , e;
	printf("ENTER THE STRING\n");
	gets(ch);
	printf("1:PARTICULAR INDEX\n2:RANGE\n");
	scanf("%d",&u);
	if (u==1)
	{
		printf("ENTER THE INDEX\n");
		scanf("%d",&u);
		u--;
		fflush(stdin);
		printf("ENTER THE CHARACHTER\n");
		scanf("%c",&ch[u]);
	}
	else
	{
		printf("ENTER THE START\n");
		scanf("%d",&u);
		u--;
		printf("ENTER THE END\n");
		scanf("%d",&e);
		fflush(stdin);
		while (u!=e)
		{
			printf("ENTER THE CHARACHTER\n");
			scanf("%c",&ch[u]);	
			fflush(stdin);
			++u ;
		}
	}
	puts(ch);
	
	
}
