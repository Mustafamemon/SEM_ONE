#include<stdio.h>
void main ()
{
	int n,i,j ;
	printf("Enter the Number of Employee : ");
	scanf("%d",&n);
	int age[n],exp[n],woh[n];
	for (i=0;i<n;i++)
	{
		printf("Enter the age of %d Employee :\n",i+1);
		scanf("%d",&age[i]);
		printf("Enter the Experience  of %d Employee :\n",i+1);
		scanf("%d",&exp[i]);
		printf("Enter the age Working Hour of %d Employee :\n",i+1);
		scanf("%d",&woh[i]);
		printf("\n");
	}
	printf("\n\n\t\tHOURLY WAGES\n\n");
	for (i=0;i<n;i++)
	{
		if (age[i]>50 && exp[i]>10 && woh[i]>240)
			printf("HOURLY WAGE Of %d Eployess = %d\n",i+1,(woh[i]*500));
		else if (age[i]>40 && age[i]<=50 && exp[i]>6 && exp[i]<=10 && woh[i]>200&& woh[i]<=240 )
			printf("HOURLY WAGE Of %d Emplyee = %d\n",i+1,(woh[i]*425));
		else if (age[i]>30 && age[i]<=40 && exp[i]>3 && exp[i]<=6 && woh[i]>160 && woh[i]<=200 )
			printf("HOURLY WAGE Of %d Emplyee = %d\n",i+1,(woh[i]*375));
		else if (age[i]>22 && age[i]<=30 && exp[i]>1 && exp[i]<=3 && woh[i]>120 && woh[i]<=160 )
			printf("HOURLY WAGE Of %d Emplyee = %d\n",i+1,(woh[i]*300));
		else
			printf("Invalid Parameters\n");	
	}
}
