#include<stdio.h>
#include<conio.h>
int main()
{
	int des, Wd, Ot, Wh, Gp, Ms;
	printf("1=Manager\n2=Hourly Workers\n3=Comission Workers\nEnter your disgnation");
	scanf("%d",&des);
	if(des==1)
	{
		printf("The Salary Of Manager:147,600PKR");
	}
	else
	if(des==2)
	{
		printf("Enter Working Hours :");
		scanf("%d",&Wh);
		printf("Enter Over time(In Hours) :");
		scanf("%d",&Ot);
		if(Wh<=8)
		{
			Wh=Wh*150 ;
			printf("Your Gross Pay is %d PKR",Wh);
		}
		else
		if(Wh>8)
		{
			Wh=Wh-Ot;
			Wh=Wh*150;
			Ot=Ot*(150*1.5);
			Gp=Wh+Ot;
			printf("Your Gross Pay is %d PKR",Gp);
		}
	}
	else
	if(des==3)
	{
		printf("Enter Working Days :");
		scanf("%d",&Wd);
		printf("Enter Over time(In Hours) :");
		scanf("%d",&Ot);
		printf("Enter Your Monthly Sales:"); 
		scanf("%d",&Ms);
		Wd=Wd*1000;
		Ot=Ot*125 ;
		Ms=Ms*0.25 ;
		Gp=Wd+Ot+Ms ;
		printf("Your Grosspay Is %d PKR",Gp);
	}
	else
	printf("Invalid Entry");
	getch();
}
