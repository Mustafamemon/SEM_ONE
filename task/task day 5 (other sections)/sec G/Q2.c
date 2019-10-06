#include<stdio.h>
#include<math.h>
int main ()
{
	int FV,PV,i,n;//futurevalue, presentvalue, interestrate, timeperiod
	printf("Enter following Values Amount InterestRate Timeperiod :\n");
	scanf("%d%d%d", &PV, &i, &n);
	FV = PV*pow((1+i),n);
	printf("The Future Value is %d",FV);
	return 0 ;
}
