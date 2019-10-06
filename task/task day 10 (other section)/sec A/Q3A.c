#include<stdio.h>
#include<string.h>
void prodlist();
void addprdo();
void calbill();
void Dispord(float dis , float *ptr, int n);
void prodlist(char (*ch)[10],float *ptr)
{
	int i,j; 
	for (i=0;i<10;i++)
	{
		for (j=0;j<4;j++)
		printf("%c",*(*(ch+i)+j));
		printf("		%.2f\n",*(ptr+i));
	}
	addprdo(ch,ptr);
	
}
void addprdo(char (*ch)[10],float *ptr)
{
	static float shopcart[5];
	char prod[5][100];
	int i,j ,n,flag=1,a; 
	scanf("%d",&n);
	if (n>5)
	printf("Error");
	else
	{
	for (i=0;i<n;i++)
	{
		scanf("%s",&prod[i]);
	}
	for (i=0;i<n;i++)
	{
	for  (j=0;j<10;j++)
	{
		if (strcmp(ch[j],prod[i])==0)
			{
				shopcart[i]=*(ptr+j);
				flag=0;
				break;
			}
		else
				flag=1;
	}	
	if (flag==1)
		printf("Invalid\n");
	}	
	}
	calbill(shopcart,n);
}
void calbill(float *ptr , int n)
{
	float sum=0;
	int i ,j,a=1;
	for (i=0;i<n;i++)
	{
		for (j=i;j<n-1 ;j++)
		{
			if (*(ptr+i)!=(*ptr+j))
			{
				a=0 ;
			}
			else
			{
				a=1;
				break ;
			}
		}
		if (a==0)
		{
			sum=sum+*(ptr+i);
		}	
	}
	Dispord(sum,ptr,n);
}
void Dispord(float dis , float *ptr ,int n)
{
	int i ;
	for (i=0;i<n;i++)
	printf("%.2f\n",*(ptr+i));
	printf("Your Final Bill is = %.2f",dis);
	
}
void main ()
{
	char pro[10][10]={{"Milk"},{"Loaf"},{"Beef"},{"Eggs"},{"Fish"},{"Surf"},{"Cake"},{"Soap"},{"Lamb"},{"Corn"}};
	float pri[]={80.23,347.52,50.36,50,85,56.58,70.236,103.63,50.23,70.236},res[5] ;
	printf("Product list	Price\n");
	prodlist(pro,pri);	
}



