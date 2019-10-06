#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main ()
{
	struct lib {
		char name[50];
		char DOB[50];
		char EID[10];
		char dep[100] ;
		int sal ;
	}*ptr;
	ptr=(struct lib *)calloc(1,sizeof(struct lib));
	int u ,cnt=-1,i,j,flag=1;
	char ch[20],ch1;
	printf("1:ADD AN EMPLOYEE\n2:DELETE AN EMPOLYEE\n3:DISPLAY ALL EMPLOYEE\n4:FIND EMPLOYEE BY NAME\n5:FIND EMPLOYEE BY ID\n6:EXIT\n");
	scanf("%d",&u);
	while (u!=6)
	{
		if (u==1)
		{
			cnt++;
			ptr=(struct lib *)realloc(ptr,(cnt+1)*sizeof(struct lib));
			printf("Enter The Name\n");
			scanf("%s",&(ptr+cnt)->name);
			fflush(stdin);
			printf("Enter The DOB\n");
			scanf("%s",&(ptr+cnt)->DOB);
			fflush(stdin);
			printf("Enter The EmployeeID\n");
			scanf("%s",&(ptr+cnt)->EID);
			fflush(stdin);
			printf("Enter The Department\n");
			scanf("%s",&(ptr+cnt)->dep);
			fflush(stdin);
			printf("Enter The salary\n") ;
			scanf("%d",&(ptr+cnt)->sal);
		}
		else if (u==2)
		{
			fflush(stdin);
			printf("Enter the ID of Employee to delt the record\n");
			gets(ch);
			for (j=0;j<=cnt;j++)
			{
				if (strcmp(ch,(ptr+j)->name)==0)
				{
					for (i=j+1;i<=cnt;i++)
					{
						strcpy((ptr+j)->name,(ptr+i)->name);
						strcpy((ptr+j)->DOB,(ptr+i)->DOB);
						strcpy((ptr+j)->EID,(ptr+i)->EID) ;
						strcpy((ptr+j)->dep,(ptr+i)->dep) ;
						(ptr+j)->sal=(ptr+i)->sal  ;
					}
					flag=0 ;
				}	
			}
			if (flag==0)
			cnt-- ;
			else
			printf("INVALID");
		}
		else if (u==3)
		{
			printf("NAME	DOB		EMPLOYEE ID		DEPARTMENT		SALARY\n");
			for (i=0;i<=cnt;i++)
			{
				printf("%s	%s	%s			%s	%d\n",(ptr+i)->name,(ptr+i)->DOB,(ptr+i)->EID,(ptr+i)->dep,(ptr+i)->sal);	
			}
		}
		else if (u==4)
		{
			
			printf("ENTER THE NAME OF AN EMPLOYEE TO FIND THE RECORD\n");
			fflush(stdin);
			gets(ch);
			for (j=0;j<=cnt;j++)
			{
				if (strcmp(ch,(ptr+j)->name)==0)
				{
					printf("%s %s %s %s %d\n",(ptr+j)->name,(ptr+j)->DOB,(ptr+j)->EID,(ptr+j)->dep,(ptr+j)->sal);
					printf("DO YOU WANT TO UAPDATE THIS RECORD\n");
					scanf("%c",&ch1);
					if (ch1=='y' || ch1=='Y')
					{
						printf("Enter The Name\n");
						scanf("%s",&(ptr+j)->name);
						fflush(stdin);
						printf("Enter The DOB\n");
						scanf("%s",&(ptr+j)->DOB);
						fflush(stdin);
						printf("Enter The EmployeeID\n");
						scanf("%s",&(ptr+j)->EID);
						fflush(stdin);
						printf("Enter The Department\n");
						scanf("%d",&(ptr+j)->dep);
						fflush(stdin);
						printf("Enter The salary\n") ;
						scanf("%d",&(ptr+j)->sal);
					}
					break ;
				}	
			}
		}
		else if (u==5)
		{
			printf("ENTER THE ID OF AN EMPLOYEE TO FIND THE RECORD\n");
			fflush(stdin);
			gets(ch);
			for (j=0;j<=cnt;j++)
			{
				if (strcmp(ch,(ptr+j)->EID)==0)
				{
					printf("%s	%s	%s	%s	%d\n",(ptr+j)->name,(ptr+j)->DOB,(ptr+j)->EID,(ptr+j)->dep,(ptr+j)->sal);
					printf("DO YOU WANT TO UAPDATE THIS RECORD\n");
					scanf("%c",&ch1);
					if (ch1=='y' || ch1=='Y')
					{
						printf("Enter The Name\n");
						scanf("%s",&(ptr+j)->name);
						fflush(stdin);
						printf("Enter The DOB\n");
						scanf("%s",&(ptr+j)->DOB);
						fflush(stdin);
						printf("Enter The EmployeeID\n");
						scanf("%s",&(ptr+j)->EID);
						fflush(stdin);
						printf("Enter The Department\n");
						scanf("%d",&(ptr+j)->dep);
						fflush(stdin);
						printf("Enter The salary\n") ;
						scanf("%d",&(ptr+j)->sal);
					}
					break ;
				}	
			}
		}
		else
		{
			printf("INVALID");exit(0)	;
		}
		printf("1:ADD AN EMPLOYEE\n2:DELETE AN EMPOLYEE\n3:DISPLAY ALL EMPLOYEE\n4:FIND EMPLOYEE BY NAME\n5:FIND EMPLOYEE BY ID\n6:EXIT\n");
		scanf("%d",&u);
	}
}

