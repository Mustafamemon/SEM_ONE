#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
struct student
{
	char id[10];
	char name[20];
	char cls[10];
};
main()
{
	struct student sys[3]={"K173860" ,"Syed Usama kazmi", "Eight","K173807" ,"Huzaifa Abid", "Eight" ,"K173885" ,"Muhammad Naveed", "Eight"};
	int i=0,j=0;
	char dell;
	char d[10]={0};
	while(1)
	{
		printf("Enter Student id:\n");
		scanf("%[^\n]s", d); 
		for(i=0;i<3;i++)
		{
			if( strcmp(d,sys[i].id)==0 )
			{
				printf("ID= %s\nName= %s\nClass= %s\n" , sys[i].id, sys[i].name, sys[i].cls);
				fflush(stdin);
				printf("Do you want to delete student record???\n");
				scanf("%c", &dell);
				if(dell=='y')	
					{
						printf("ID: %s all records Deleted\n", sys[i].id);
						printf("\n****Student List**\n\n");
						for(j=0;j<3;j++)
						{
							
							if(j!=i)
								printf("ID= %s\nName= %s\nClass= %s\n" , sys[j].id, sys[j].name, sys[j].cls);
						}
						exit(0);
					}
				else 
					{
						printf("\n****Student List**\n\n");
						for(j=0;j<3;j++)
						{
							
							printf("ID= %s\nName= %s\nClass= %s\n" , sys[j].id, sys[j].name, sys[j].cls);
						}
						exit(0);
					}
					
			}
			
		}
		
	}
}
