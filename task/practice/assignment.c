#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sort(char **ptr,int *ptr1,int k)
{
	int i,j ,temp1 ,l;
	char *temp;
	for (i=0;i<k;i++)
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
	for (i=0;i<k;i++)
	{
		for (j=0;j<k-1;j++)
		{
			if (*(ptr1+j)==*(ptr1+j+1))
			{
				if ((strcmp(*(ptr+j),*(ptr+j+1)))>0)
				{
					temp=*(ptr+j);
					*(ptr+j)=*(ptr+j+1);
					*(ptr+j+1)=temp;
				}
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
		scanf("%c",&ch[cnt]);
	}
	ptr=(char **)calloc(1,sizeof(char*));
	while (ch[a-1]!='\n')// || ch[a+1]!='\n')
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
		*(ptr+k)=(char *)calloc(len[k],sizeof(char)+1);
		for (l=0;l<j;l++)
		{
			ptr[k][l]=ch[l+i];
		}
		a++; 
		k++; 
		i=i+j+1;
		ptr=(char **)realloc(ptr,(k+1)*sizeof(char*));
	}
	printf("\t\tBefore Sorting\n");
	for (i=0;i<k;i++)	
	printf("%s\n",ptr[i]);
	sort(ptr,len,k);
	return 0;
}
