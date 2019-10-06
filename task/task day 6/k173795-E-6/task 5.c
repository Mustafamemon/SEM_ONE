#include<stdio.h>
#include<conio.h>
void main()
{
	int ans, E=0 ,T;
	printf("Enter Your Post\n1=Assistant Manager\n2=Junior Manager : ");
	scanf("%d",&ans);
	if(ans==2)
	{
		printf("Sorry! First Become Assistant Manager");
	}
	else 
	{
		printf("Enter Your Experience :");
		scanf("%d",&E);
		if (E<=7 )
	{
		printf("Sorry! You Need More Experience");
	}
	else 
	{
		printf("Enter No of Traning Your Recieved :");
		scanf("%d",&T);
		if (T<=4)
	{
		printf("Sorry! You Need More Training");
	}
	if(E>=8 && T>=5 && ans == 1)
	{
		printf("Congratulation You Become a Manager Of Organization");
	}
	}
	}
}
	

