#include<stdio.h>
#include<string.h>
struct data{
	char roll[10];
	char name[20];
	char clas[10];
};
main()
{
	struct data d[4]={"k173795","mustafa","12","k173785","junaid","11","k173798","murtuza","10","k173705","Faisal","11"};
	int i ;
	char del[10]={0};
	printf("\n\t\tStudent List\n\n");
	for(i=0;i<4;i++)
		{
			{
				printf("Roll # = %s\nName = %s\nClass = %s\n" , d[i].roll, d[i].name, d[i].clas);	
			}	
		}
	printf("\nEnter Student Roll #:\n");
	scanf("%[^\n]s", del); 
	printf("\n\n");
	printf("\t\t New Student List\n\n");
	for(i=0;i<4;i++)
		{
			if(strcmp(del,d[i].roll)!=0)
			{
				printf("Roll # = %s\nName = %s\nClass = %s\n" , d[i].roll, d[i].name, d[i].clas);	
			}	
		}
}

