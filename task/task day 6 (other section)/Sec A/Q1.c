#include<stdio.h>
#include<conio.h>
int main() {
	int TI , tsh , fsh , ww , TA , CP=5000, AR , dis;
	printf("Enter No of Formal Shirts :");
	scanf("%d",&fsh);
	printf("Enter No of T-shirt :");
	scanf("%d",&tsh);
	printf("Enter No of Wrist Watches :");
	scanf("%d",&ww);
	TI = tsh + fsh + ww ;
	printf("Total Number of items purchased by customer : %d\n",TI);
	TA = (tsh*500)+(fsh*1000)+(ww*500);
	printf("Total Amount :Rs %d\n",TA);
	printf("Enter Amount Provided By customer:Rs");
	scanf("%d",&CP);
	if(TA>2999)
	{
		printf("Congratulation1! You have purchased items of over Rs.3000\nEnjoy the 10%% Discount on total");
		dis=TA*0.1 ;
		TA=TA - dis ;
		AR = CP - TA ;
	}
		else
	{
		AR = CP - TA ;
	}	
	printf("\n\nAmount returned to customer:Rs%d",AR);
getch();
}
	
	
	
