#include<stdio.h>
int main()
{
	char ones[][8]={" ","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	char tens[][8]={" ","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seven","Eighty","Ninty"};
	char hund[][100]={"","Hundered","Thousands"};
	int num,temp,i=01,j,k,l ;
	scanf("%d",&num);
	temp=num ;
	while(num!=0)
	{
		i++;
		num=num/10 ;
	}
	for (j=0;j<i;j++)
	{
		if (i==4)
		{
			printf("%s ",ones[temp/1000]);
			printf("%s",hund[2]);
		}
	}
}
