#include<stdio.h>
void display(char str[6][6] , int i , int j, int k)
{
	if(i!=k)
	{
		if(j!=6)
		{
			printf("%c	",str[i][j]);
			return display(str,i,++j,k);
		}
		printf("\n");
		return display(str,++i,0,k);
	}
}
void main ()
{
	int arr[100],k=6 ;
	char str[6][6]={
	{'A','B','C','D','E'},
	{'F','G','H','I','J'},
	{'K','L','M','N','O'},
	{'P','Q','R','S','T'},
	{'U','V','W','X','Y'},
	{'Z'}
	};
	display (str,0,0, k);
	int m , i; char str1[100][6];
	printf("SOUCHO EK WORD OR MUJH NH BTANA : \n");
	k=0;
	while (m!=-1)
	{
		printf("APNE NAME KA %d LETTER BATAO KIS COL MAIN HAI\n",k+1);
		scanf("%d",&m);
		m-- ;
		if (m!=-1)
		{
			for (i=0;i<7;i++)
			{
				str1[k][i]=str[i][m] ;
			}
			k++ ;	
		}
	}
	display (str1,0,0,k);
	int n=0; m ;
	while (n!=k)
	{
		printf("APNE NAME KA %d LETTER BATAO KIS COL MAIN HAI\n",n+1);
		scanf("%d",&m);
		m-- ;
		for (i=0;i<7;i++)
		{
			str[n][i]=str1[i][m] ;
		}
		n++;
	}
	int j ;
	for (i=0;i<k;i++)
	{
		for (j=0;j<k;j++)
		{
			if (i==j)
			{
				printf("%c",str[i][j]);
			}
		}
	}
}
