#include<stdio.h>
#include<stdlib.h>
int *input(int *s ,int *cnt)
{
	if (*cnt==0)
	{
		s=(int *)malloc(sizeof(int));
		scanf("%d",&s[*cnt]) ;
		(*cnt)++;
		return input(s,cnt);
	}
	else if (s[*cnt-1]!=0)
	{
		s=(int *)realloc(s,(*cnt+1)*sizeof(int));
		scanf("%d",&s[*cnt]);
		(*cnt)++;
		return input(s,cnt);	
	}
	return s ;
}
int *sort (int *s ,int cnt ,int i , int j)
{
	int temp ;
	if (i!=(cnt-1))
	{
		if (j!=(cnt-2))
		{
			if (s[j]<s[j+1])
			{
				temp=s[j+1];
				s[j+1]=s[j];
				s[j]=temp;				
			}
			j++;
			return sort(s,cnt,i,j);	
		}
		i++ ;
		return sort(s,cnt,i,0);		
	}
	return s ;
}
void outpt (int *s , int cnt)
{
	if (cnt>=0
	)
	{
		printf("%d\n",s[cnt]);
		return outpt(s,--cnt);
	}
	
}
int  main ()
{
	int *ptr  ,cnt=0 , i;
	ptr=input(ptr, &cnt);
	ptr=sort(ptr,cnt ,0,0);
	outpt(ptr,cnt-1);
	return 0 ;
}
