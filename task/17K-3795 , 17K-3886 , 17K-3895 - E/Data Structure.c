#include<stdio.h>
#include<string.h>
struct data{
	int roll;
	int clas;
	char name[20];
	
};
void main()
{
	struct data d[4]={
	{173795,12,"MUSTAFA"},{173785,11,"JUNAID"},{173798,10,"MURTUZA"},{173705,11,"FAISAL"}
	};
	int i ,del,cnt=4,j ,flag=1;
	char ch ;
	printf("\n\t\tStudent List\n\n");
	for(i=0;i<4;i++)
	{
		printf("Roll # = %d\nName = %s\nClass = %d\n" , d[i].roll, d[i].name, d[i].clas);	
	}
	printf("\nDo You Want to del the record of student\nEnter Y or N\n");
	scanf("%c",&ch);
	while (ch=='Y' || ch=='y'){
	printf("\nEnter Student Roll #:\n");
	scanf("%d",&del); 
	fflush(stdin);
	for(i=0;i<4;i++)
	{
		if (del==d[i].roll)
		{
			flag=0;
			cnt--;
			for  (j=i;j<4;j++)
			{
				d[j].roll=d[j+1].roll ;
				strcpy(d[j].name,d[j+1].name);
				d[j].clas=d[j+1].clas ;
			}
		}
	}
	if (flag==1)
	{
		printf("INVALID ROLL #");
	}
	flag=1 ;
	printf("\nDo You Want to del the record of another student\nEnter Y or N\n");
	scanf("%c",&ch);
	}
	printf("\t\t New Student List\n\n");
	for(i=0;i<cnt;i++)
	{
		printf("Roll # = %d\nName = %s\nClass = %d\n" , d[i].roll, d[i].name, d[i].clas);		
	}
}

