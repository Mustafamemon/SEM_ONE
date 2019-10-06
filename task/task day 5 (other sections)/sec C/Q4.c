#include<stdio.h>
float main ()
{
	float phy, chem, math, bio, comp, marks_obtain, Perc ;
	printf("Enter Marks Obtain phy, chem math bio comp repectively :\n");
	scanf("%f%f%f%f%f", &phy, &chem, &math, &bio, &comp);
	marks_obtain = phy + chem + math + bio + comp ;
	Perc = (marks_obtain/500 )*100 ;
	printf("Total Marks Obtain is %.2f \nYour Percentage is %.2f ",marks_obtain,Perc);
}
