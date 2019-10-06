#include<stdio.h>
void main()
{
	int n=0,sco[101],i,j,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,k=0,l=0,m=0,o=0;
	printf("Enter the number of students ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Enter the score %d student\n",i+1);
		scanf("%d",&sco[i]);
	}
	for (j=100;j>=0;j--)
	{
	
		printf("%3d : ",j);
		for (i=0;i<n;i++)
		{
			if (j==sco[i])
			{
			printf("*");
			if (sco[i]>=90)
			a++;
			else if (sco[i]>=86 && sco[i]<=89)
			b++;
			else if (sco[i]>=82 && sco[i]<=85)
			c++;
			else if (sco[i]>=78 && sco[i]<=81)
			d++;
			else if (sco[i]>=74 && sco[i]<=80)
			e++;
			else if (sco[i]>=70 && sco[i]<=73)
			f++;
			else if (sco[i]>=66 && sco[i]<=69)
			g++;
			else if (sco[i]>=62 && sco[i]<=65)
			h++;
			else if (sco[i]>=58 && sco[i]<=61)
			k++;
			else if (sco[i]>=54 && sco[i]<=57)
			l++;
			else if (sco[i]>=50 && sco[i]<=53)
			m++;
			else if (sco[i]>=0 && sco[i]<=49)
			o++;
			}
		}
		printf("\n");
	}
	printf("A+= %d\nA= %d\nA-= %d\nB+= %d\nB= %d\nB-= %d\nC+= %d\nC= %d\nC-= %d\nD+= %d\nD= %d\nFAIL= %d",a,b,c,d,e,f,g,h,k,l,m,o);
	}
	

