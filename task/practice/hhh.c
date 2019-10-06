#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sort(char **ptr,int *ptr1,int k)
{
	int i,j ,temp1;
	char *temp;
	for (i=0;i<k-1;i++)
	{
		for (j=(i+1);j<k;j++)
		{
			if (*(ptr1+i)<*(ptr1+j))
			{
				temp=ptr[i]; ptr[i]=ptr[j]; ptr[j]=temp;
				temp1=ptr1[i];	ptr1[i]=ptr1[j]; ptr1[j]=temp1;
			}	
		}
	}
	printf("\n\t\tAfter Sorting\n");
	for (i=0;i<k;i++)	
	printf("%s\n",ptr[i]);		
}
int main ()
{
	int len[100],i=0,j=0,k=0,a=0,l,cnt=0;
	char **ptr,*ch,ch1[100][100]={' '};
	ch=(char *)malloc(1);
	printf("ENTER THE STRING:\n");
	scanf("%c",&ch[cnt]);
	while (ch[cnt]!='\n')
	{
		++cnt;
		ch=(char *)realloc(ch,(1+cnt));
		//scanf("%s",ch[cnt]);
		gets(ch);
		printf("	%d",cnt);
	}
	while (ch[a-1]!='\n')
	{
		j=0;
		while (ch[a]!=' ')
		{
			j++; 
			a++;
			if(a == cnt)
			break ;	
		}
		len[k]=j;
		for (l=0;l<=j;l++)
		{
			ch1[k][l]=ch[l+i];
		}
		a++; 
		k++; 
		i=i+j+1;
	}
	printf("\t\tBefore Sorting\n");
	ptr=(char **)malloc(k*sizeof(char*));
	for (i=0;i<k;i++)
	{
		*(ptr+i)=(char *)malloc(len[i]*sizeof(char)+1);
			ptr[i]=ch1[i];
	}
	for (i=0;i<k;i++)	
	printf("%s\n",ptr[i]);
	sort(ptr,len,k);
	return 0;
}
