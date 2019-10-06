#include<stdio.h>
int avg(int (*ptr)[7])
{
	int i , j ,sum=0 ,avg;
	for (i=0;i<3;i++)
	{
		for (j=0;j<7;j++)
		{
			sum+=*(*(ptr+i)+j);
		}
	}
	avg=sum/(7*3);
	return avg ;
}
int max (int (*ptr)[7])
{
	int i , j,temp=0,y ;
	for (i=0;i<3;i++)
	{
		for (j=0;j<7;j++)
		{
			if (temp<*(*(ptr+i)+j))
			{
				temp=*(*(ptr+i)+j);
			}
		}
		
	}
	return temp ;
}
int least (int temp , int (*ptr)[7])
{
	int i , j,y ;
	for (i=0;i<3;i++)
	{
		for (j=0;j<7;j++)
		{
			if (temp>*(*(ptr+i)+j))
			{
				temp=*(*(ptr+i)+j);
			}
		}
		
	}
	return temp ;
}
int main ()
{
	int arr[3][7],i,j,res,res1,res3;
	for (i=0;i<3;i++)
	{
		for (j=0;j<7;j++)
		{
			printf("Enter the %d Panda %d days food :\n",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	res=avg(arr);
	res1=max (arr);
	res3= least (res1,arr);
	printf("AVG= %d\nMAXIMUM= %d\nLEAST= %d",res,res1,res3);
	
	
}
	
