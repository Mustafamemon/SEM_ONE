#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main ()
{
	struct lib {
		int num ;
		char book[50];
		char auth[50];
		char pub[10];
		int pri ;
		int flag ;
	}*ptr;
	ptr=(struct lib *)calloc(1,sizeof(struct lib));
	int u ,cnt=-1,i,j;
	char ch[20];
	printf("1:ADD NEW BOOk\n2:DELETE SPECIFIC FROM LIST\n3:DISPLAY ALL BOOKS\n4:EXIT\n");
	scanf("%d",&u);
	while (u!=4)
	{
		if (u==1)
		{
			cnt++;
			ptr=(struct lib *)realloc(ptr,(cnt+1)*sizeof(struct lib));
			printf("Enter The Accession Number\n");
			scanf("%d",&(ptr+cnt)->num);
			printf("Enter The Title of the Book\n");
			scanf("%s",&(ptr+cnt)->book);
			fflush(stdin);
			printf("Enter The Author Name\n");
			scanf("%s",&(ptr+cnt)->auth);
			fflush(stdin);
			printf("Enter The Publication Date\n");
			scanf("%s",&(ptr+cnt)->pub);
			fflush(stdin);
			printf("Enter The Price of the Book\n") ;
			scanf("%d",&(ptr+cnt)->pri);
			printf("Enter The Flag (indicating whether book is 1:issued or 0:not)\n");
			scanf("%d",&(ptr+cnt)->flag);
		}
		else if (u==2)
		{
			fflush(stdin);
			printf("Enter the compelete title of the book to delt the record\n");
			gets(ch);
			for (j=0;j<=cnt;j++)
			{
				if (strcmp(ch,(ptr+j)->book)==0)
				{
					for (i=j+1;i<=cnt;i++)
					{
						(ptr+j)->num=(ptr+i)->num  ;
						strcpy((ptr+j)->book,(ptr+i)->book);
						strcpy((ptr+j)->auth,(ptr+i)->auth);
						strcpy((ptr+j)->pub,(ptr+i)->pub) ;
						(ptr+j)->pri=(ptr+i)->pri  ;
						(ptr+j)->flag=(ptr+i)->flag;
					}
				}	
			}
			cnt-- ;
		}
		else if (u==3)
		{
			for (i=0;i<=cnt;i++)
			{
				printf("%d %s %s %s %d %d\n",(ptr+i)->num,(ptr+i)->book,(ptr+i)->auth,(ptr+i)->pub,(ptr+i)->pri,(ptr+i)->flag);	
			}
		}
		printf("1:ADD NEW BOOk\n2:DELETE SPECIFIC FROM LIST\n3:DISPLAY ALL BOOKS\n4:EXIT\n");
		scanf("%d",&u);
	}
	int temp ;
	char temp1[100];
	for (i=0;i<=cnt;i++)
	{
		for (j=i+1;j<=cnt;j++)
		{
			if ((ptr+i)<(ptr+j))
			{
				temp=(ptr+i)->num;	(ptr+i)->num=(ptr+j)->num ;(ptr+j)->num=temp ;
				temp=((ptr+j)->pri);(ptr+i)->pri=(ptr+j)->pri ;(ptr+j)->pri=temp ;
				temp=(ptr+i)->flag; (ptr+i)->flag=(ptr+j)->flag ;(ptr+j)->flag=temp ;
				strcpy(temp1,(ptr+j)->book) ;strcpy((ptr+j)->book,(ptr+i)->book);strcpy((ptr+i)->book,(temp1));
				strcpy(temp1,(ptr+j)->auth) ;strcpy((ptr+j)->auth,(ptr+i)->auth);strcpy((ptr+i)->auth,(temp1));
				strcpy(temp1,(ptr+j)->pub);strcpy((ptr+j)->pub,(ptr+i)->pub);strcpy((ptr+i)->pub,(temp1));
			}
		}
	}
	for (i=0;i<=cnt;i++)
	{
		printf("%d %s %s %s %d %d\n",(ptr+i)->num,(ptr+i)->book,(ptr+i)->auth,(ptr+i)->pub,(ptr+i)->pri,(ptr+i)->flag);	
	}
}
