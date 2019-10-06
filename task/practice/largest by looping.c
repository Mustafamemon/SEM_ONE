#include<stdio.h>
void main ()
{
	int in=0,lar1=0,i,x1=0;
	float rn,lar=0,x=0;
	printf("Enter the integers : ");
	for (i=1;i<=5;i++)
	{
		scanf("%d",&rn);
		if (x>in)
		lar1=x1;
		else
		lar1=in;
		x1=lar1;
	}
	printf("Enter the real number : ");
	for (i=1;i<=5;i++)
	{
		scanf("%f",&rn);
		if (x>rn)
		lar=x;
		else
		lar=rn;
		x=lar;
	}
	if (x>x1)
	printf("largest number %.2f",lar);
	else
	printf("largest %d",lar1);
}
