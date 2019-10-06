#include<stdio.h>
float main ()
{
	float phy, chem, math, bio, comp, marks_obtain, Perc ;
	printf("Enter Marks Obtain in physics :\n");
	scanf("%f", &phy);
	printf("Enter Marks Obtain in chemistry :\n");
	scanf("%f", &chem);
	printf("Enter Marks Obtain in maths :\n");
	scanf("%f", &math);
	printf("Enter Marks Obtain in biology :\n");
	scanf("%f", &bio);
	printf("Enter Marks Obtain in computer :\n");
	scanf("%f", &comp);
	marks_obtain = phy + chem + math + bio + comp ;
	Perc = (marks_obtain/500 )*100 ;
	printf("\nSubjects\tMax Marks\tObt.Marks\nPhysics\t\t100\t\t%.0f\nchemistry\t100\t\t%.0f\nMaths\t\t100\t\t%.0f\nBiology\t\t100\t\t%.0f\nComputer\t100\t\t%.0f\nTotal\t\t500\t\t%.0f\nPercentage\t\t\t%.2f",phy,chem,math,bio,comp,marks_obtain,Perc);
	return 0 ;
}
