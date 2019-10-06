#include<stdio.h>
int main ()
{
	int Pak, UK, Ind, Aus, Sum;//pakistan,unitedkingdom,india,australia
	printf("Enter Pakistani Coins :\n");
	scanf("%d", &Pak);
	printf("Enter UK Coins :\n");
	scanf("%d", &UK);
	printf("Enter Indian Coins :\n");
	scanf("%d", &Ind);
	printf("Enter Autralian Coins :\n");
	scanf("%d", &Aus);
	Sum  = Pak + UK + Ind + Aus ;
	printf("The Total International Coins Does He/She Have is %d", Sum);
}
