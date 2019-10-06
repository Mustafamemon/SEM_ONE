#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int **ptr ,n,n1,i,m,j,m1,**mar;
	float *avg ,*per;
	printf("Enter the Number of stundents : ");
	scanf("%d",&m);
	ptr=(int **)calloc(m,sizeof(int));
	for  (i=0;i<m;i++)
	*(ptr+i)=(int *)calloc(m,sizeof(int));
	mar=(int **)calloc(m,sizeof(int));
	for  (i=0;i<5;i++)
	*(mar+i)=(int *)calloc(5,sizeof(int));
	avg=(float *)calloc(m,sizeof(float));
	per=(float *)calloc(m,sizeof(float));
	for (i=0;i<m;i++)
	{
		printf("Enter the roll # of %d student ",i+1);
		scanf("%d",&ptr[i][0]);
	}
	for (i=0;i<m;i++)
	{
		printf("Enter the marks of %d student ",i+1);
		for (j=0;j<5;j++)
		{
			scanf("%d",&mar[i][j]);
			avg[i]=avg[i]+mar[i][j];	
		}
	}
	for (i=0;i<m;i++)
	{
		ptr[i][1]=avg[i]/5;
		ptr[i][2]=(avg[i]*100)/500 ;
	}
	printf("Roll #	Average	Percentage\n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<3;j++)
		printf("%d	",ptr[i][j]);
		printf("\n");
	}
}
	
