#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	int date ;
	int month ;
	int year ;
}d;
typedef struct{
	int s ;
	int e;
}em;
typedef struct{
	char name[20];
	d dob ;
	em id ; 
	char dep[20]; 
	int sal ;
}emp1,emp;
emp *input (emp1 *s , int cnt)
{
	fflush(stdin);
	if (cnt==0)
	s=(emp *)calloc(1,sizeof(emp));
	else
	s=(emp *)realloc(s,(cnt+1)*sizeof(emp));
	printf("Enter the name of the Employee\n");
	gets((s+cnt)->name);
	fflush(stdin);
	printf("Enter the DATE OF BIRTH\n");
	scanf("%d/%d/%d",&(s+cnt)->dob.date,&(s+cnt)->dob.month,&(s+cnt)->dob.year);
	printf("Enter the ID of the Employee\n");
	fflush(stdin);
	scanf("%d-%d",&(s+cnt)->id.s,&(s+cnt)->id.e);
	fflush(stdin);
	printf("Enter the DEPARTMENT of the Employee\n");
	gets((s+cnt)->dep);
	fflush(stdin);
	printf("Enter the SALARY of the Employee\n");
	scanf("%d",&(s+cnt)->sal);
	fflush(stdin);
	return s ;
}
void *display(emp *s ,int cnt)
{
	int i ;
	for (i=0;i<cnt;i++)
	printf("%s	%d/%d/%d	%d-%d		%s	%d\n",(s+i)->name,(s+i)->dob.date,(s+i)->dob.month,(s+i)->dob.year,(s+i)->id.s,(s+i)->id.e,(s+i)->dep,(s+i)->sal);
}
emp *del(emp *s ,int *cnt)
{
	char ch[20];
	printf("ENTER THE NAME OF THE EMPLOYEE\n");
	fflush(stdin);
	gets(ch);
	int i , j , f=1;
	for (i=0;i<=*cnt;i++)
	{
		if (strcmp(ch,(s+i)->name)==0)
		{
			for (j=i;j<=(*cnt-1);j++)
			{
				strcpy((s+j)->name,(s+j+1)->name) ;
				(s+j)->dob.date=(s+j+1)->dob.date ;
				(s+j)->dob.month=(s+j+1)->dob.month ;
				(s+j)->dob.year=(s+j+1)->dob.year ;
				(s+j)->id.s=(s+j+1)->id.s ;
				(s+j)->id.e=(s+j+1)->id.e;
				strcpy((s+j)->dep,(s+j+1)->dep) ;
				(s+j)->sal=(s+j+1)->sal ;
			}
			(*cnt)-- ;
			f=0 ;
			break ;
		}
	}
	if (f==1)
	{
		printf("INVALID\n");
		del(s,cnt);
	}
	return s ;
}
void name(emp *s,int cnt)
{
	char ch[20];
	printf("ENTER THE NAME OF THE EMPLOYEE\n");
	fflush(stdin);
	gets(ch);
	int i ,f=1;
	for (i=0;i<cnt;i++)
	{
		if (strcmp(ch,(s+i)->name)==0)
		{
			printf("%s	%d/%d/%d	%d-%d		%s	%d\n",(s+i)->name,(s+i)->dob.date,(s+i)->dob.month,(s+i)->dob.year,(s+i)->id.s,(s+i)->id.e,(s+i)->dep,(s+i)->sal);
			f=0 ;
			break ;
		}
	}
	if (f==1)
	{
		printf("INVALID\n");
		name(s,cnt);
	}
	
}
void ID(emp *s,int cnt)
{
	int i ,f=1 ,ch,ch1;
	printf("ENTER THE ID OF THE EMPLOYEE\n");
	fflush(stdin);
	scanf("%d-%d",&ch,&ch1);
	for (i=0;i<cnt;i++)
	{
		if (ch==(s+i)->id.s && ch1==(s+i)->id.e)
		{
			printf("%s	%d/%d/%d	%d-%d		%s	%d\n",(s+i)->name,(s+i)->dob.date,(s+i)->dob.month,(s+i)->dob.year,(s+i)->id.s,(s+i)->id.e,(s+i)->dep,(s+i)->sal);
			f=0 ;
			break ;
		}
	}
	if (f==1)
	{
		printf("INVALID\n");
		ID(s,cnt);
	}
}
void update (emp *s ,emp *h , int cnt)
{
	int i, f=1 ;
	char ch[20];
	printf("ENTER THE NAME OF THE EPMLOYEE TO UPDATE HIS REOCRD\n");
	fflush(stdin);
	gets(ch);
	for (i=0;i<cnt;i++)
	{
		if (strcmp(ch,s[i].name)==0)
		{
			printf("ENTER THE NEW SALARY\n");
			scanf("%d",&h[i].sal) ;
			f=0;
			break ;
		}
	}
	if (f==1)
	{
		printf("INVALID\n");
		update(s,h,cnt);
	}
}
void main ()
{
	int u  ,cnt=0;
	emp *ptr ;
	printf("1:ADD AN EMPLOYEE\n2:DELETE AN EMPLOYEE\n3:DISPLAY ALL EMPLOYEE\n4:FIND EMPLOYEE BY NAME\n5:FIND EMPLOYEE BY EMPLOYEE(ID)\n6:UPDATE AN EMPLOYEE\n7:EXIT\n");
	scanf("%d",&u);
	while (u!=7)
	{
		if (u==1)
		{
			ptr=input(ptr,cnt);
			++cnt;
		}
		else if (u==2)
		ptr=del(ptr,&cnt);
		else if (u==3)
		display(ptr,cnt);
		else if (u==4)
		name(ptr,cnt);
		else if (u==5)
		ID(ptr,cnt);
		else if (u==6)
		update(ptr,ptr,cnt);
		printf("1:ADD AN EMPLOYEE\n2:DELETE AN EMPLOYEE\n3:DISPLAY ALL EMPLOYEE\n4:FIND EMPLOYEE BY NAME\n5:FIND EMPLOYEE BY EMPLOYEE(ID)\n6:UPDATE AN EMPLOYEE\n7:EXIT\n");
		scanf("%d",&u);
	}
}
