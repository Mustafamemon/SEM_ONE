#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
		int day ;
		int month ;
		int year ;
	}date;
typedef struct {
		char book[50];
		char auth[50];
		date pub ;
		int flag ;
		int num ;
	}lib;
lib *addbook(lib *s ,int cnt) 
{
		if (cnt==0)
		s=(lib *)malloc(sizeof(lib));
		else
		s=(lib *)realloc(s,(cnt+1)*sizeof(lib));
		fflush(stdin);
		printf("Enter The Title of the Book\n");
		fflush(stdin);
		gets((s+cnt)->book);
		printf("Enter The Author Name\n");
		fflush(stdin);
		gets((s+cnt)->auth);
		fflush(stdin);
		printf("Enter The Publication Date\n");
		scanf("%d/%d/%d",&(s+cnt)->pub.day,&(s+cnt)->pub.month,&(s+cnt)->pub.year);
		printf("Enter The Flag (indicating whether book is 1:issued or 0:not)\n");
		scanf("%d",&(s+cnt)->flag);
		printf("Enter the Asscesion No.\n");
		scanf("%d",&(s+cnt)->num);
		return s ;
}
void display( lib *s ,int cnt)
{
	int i ;
	for (i=0;i<cnt;i++)
	{
		printf("%d	%s , %s , %d/%d/%d	%d\n",(s+i)->num,(s+i)->book,(s+i)->auth,(s+i)->pub.day,(s+i)->pub.month,(s+i)->pub.year,(s+i)->flag);
	}	
}
lib *delet(lib *s ,int *cnt)
{
	int i ,j , f=1;
	char ch[20];
	fflush(stdin);
	printf("Enter the compelete title of the book to delt the record\n");
	gets(ch);
	for (j=0;j<*cnt;j++)
	{
		if (strcmp(ch,(s+j)->book)==0)
		{
			for (i=j+1;i<*cnt;i++)
			{
				(s+j)->num=(s+i)->num ; 
				strcpy((s+j)->book,(s+i)->book);
				strcpy((s+j)->auth,(s+i)->auth);
				(s+j)->pub.day=(s+i)->pub.day; 
				(s+j)->pub.month=(s+i)->pub.month ;
				(s+j)->pub.year=(s+i)->pub.year ;
				(s+j)->flag=(s+i)->flag;
			}
			(*cnt)-- ;
			f=0 ; 
			break  ;
		}
	}
	if (f==1)
	{
		printf("INVALID\n");
		delet(s,cnt);
	}
	return s ;
}
lib *update (lib *s , int cnt)
{
	char ch[200];
	int i , j , u , f=1;
	fflush(stdin);
	printf("ENTER THE NAME OF THE BOOKS WHICH YOU WANT TO UPDATE\n");
	gets(ch);
	for (i=0;i<=cnt;i++)
	{
		if (strcmp(ch,(s+i)->book)==0)
		{
			printf("Enter The Flag (indicating whether book is 1:issued or 0:not)\n");
			scanf("%d",&(s+i)->flag);
			f=0 ;
			break ;
		}
	}
	if (f==1)
	{
		printf("INVALID\n");
		update(s,cnt);
	}
	return s ;
}
lib *sort(lib *s , int cnt )
{
	int i , j , temp;
	char temp1[100];
	for (i=0;i<cnt;i++)
	{
		for (j=i+1;j<cnt;j++)
		{
			if ((s+i)->num>(s+j)->num)
			{
				temp=(s+j)->num;	(s+j)->num=(s+i)->num;	(s+i)->num=temp; 
				strcpy(temp1,(s+j)->book);	strcpy ((s+j)->book,(s+i)->book); 	strcpy((s+i)->book,temp1);
				strcpy(temp1,(s+j)->auth);strcpy ((s+j)->auth,(s+i)->auth);	strcpy((s+i)->auth,temp1);
				temp=(s+j)->pub.day;(s+j)->pub.day = (s+i)->pub.day;	(s+i)->pub.day=temp ;
				temp=(s+j)->pub.month ;	(s+j)->pub.month = (s+i)->pub.month;	(s+i)->pub.month=temp ;
				temp=(s+j)->pub.year;	(s+j)->pub.year = (s+i)->pub.year;	(s+i)->pub.year=temp ;
				temp=(s+j)->flag ;	(s+j)->flag=(s+i)->flag;	(s+i)->flag=temp;	
			}
		}
	}
	return s ;
}
void output(lib *s ,int cnt , int x)
{
	int i ;
	printf("\n\n");
	for (i=0;i<cnt;i++)
	{
		if(x==6)
		printf("%s\n",(s+i)->book);
		else
		printf("%s\n",(s+i)->auth);
	}
}
void main ()
{
	lib *ptr ;
//	ptr=(lib *)malloc(sizeof(lib));
	int u ,cnt=0;
	printf("1:ADD NEW BOOK\n2:DISPLAY ALL BOOKS\n3:DELETE SPECIFIC FROM LIST\n4:UPDATE ANY RECORD\n5:UPADATE YOUR LIST IN ORDER\n6:LIST OF BOOKS\n7:LIST OF AUTHOUR\n8:EXIT\n");
	scanf("%d",&u);
	while (u!=8)
	{
		if (u==1)
		{
			//ptr=(lib *)realloc(ptr,(1+cnt)*sizeof(lib));
			ptr=addbook(ptr ,cnt) ;
			++cnt;	
		}	
		else if (u==2)
		display(ptr,cnt);
		else if (u==3)
		ptr=delet(ptr ,&cnt);
		else if (u==4)
		ptr=update(ptr,cnt);
		else if (u==5)
		ptr=sort(ptr,cnt);
		else if (u==6|| u==7)
		output(ptr,cnt,u);
		printf("1:ADD NEW BOOK\n2:DISPLAY ALL BOOKS\n3:DELETE SPECIFIC FROM LIST\n4:UPDATE ANY RECORD\n5:UPADATE YOUR LIST IN ORDER\n6:LIST OF BOOKS\n7:LIST OF AUTHOUR\n8:EXIT\n");
		fflush(stdin);
		scanf("%d",&u);
	}
}
