#include<stdio.h>
void main()
{
	int n=0,sco[101],array[101]={0},i,j,k,l,a;
	printf("Enter the number of students ");
	scanf("%d",&n);
	printf("Enter the score %d students\n",n);
	for (i=0;i<n;i++)
	{
		k=1;
		scanf("%d",&sco[i]);
		for (j=0;j<101;j++)
		{
				printf("%d : ",i);
			if (j==sco[i])
			{
				for (l=0;l<i;l++)
				{
					if (sco[i]==sco[l])
					{
						k++;
						array[j]=k; 
					}
					else
					array[j]=k; 
				}	
			}
			
		}
			printf("\n");
	}
	for (i=0;i<101;i++)
	{
		printf("%d : ",i);
		for (j=array[i];j>=1;j--)
		printf("*");
		printf("\n");
	}
	a=0;
	for (j=90;j<101;j++)
	a=a+array[j];
	printf("%d A+",a);
	a=0;
	for (j=86;j<90;j++)
	a=a+array[j];
	printf(" %d A",a);
	a=0;
	for (j=82;j<86;j++)
	a=a+array[j];
	printf(" %d A-",a);
	a=0;
	for (j=78;j<82;j++)
	a=a+array[j];
	printf(" %d B+",a);
	a=0;
	for (j=74;j<78;j++)
	a=a+array[j];
	printf(" %d B",a);
	a=0;
	for (j=70;j<74;j++)
	a=a+array[j];
	printf(" %d B-",a);
	a=0;
	for (j=66;j<70;j++)
	a=a+array[j];
	printf(" %d C+",a);
	a=0;
	for (j=62;j<66;j++)
	a=a+array[j];
	printf(" %d C",a);
	a=0;
	for (j=58;j<62;j++)
	a=a+array[j];
	printf(" %d C-",a);
	a=0;
	for (j=54;j<58;j++)
	a=a+array[j];
	printf(" %d D+",a);
	a=0;
	for (j=50;j<54;j++)
	a=a+array[j];
	printf(" %d D",a);
	a=0;
	for (j=49;j>=0;j--)
	a=a+array[j];
	printf(" %d fail",a);
}

		


