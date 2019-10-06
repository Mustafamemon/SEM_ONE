#include<stdio.h>
void play1(char mat[3][3]);
void play2(char mat[3][3]);
void dis(char mat[3][3]);
char check (char mat[3][3]);
void main ()
{
	char ch=' ';
	char mat [3][3];
	int i,j ,k=0;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		mat[i][j]='1';
	}
	dis(mat);
	for (i=0;i<=4;i++)
	{
		play1(mat);
		ch=check(mat);	//dis(mat);	
		if (ch==' ')
		dis(mat);
		else
		{
			if (ch=='X')
			{
				printf("Player one win\n");
				k=1;
				dis(mat);
			}
			else 
			{
				printf("Player two win\n");
				k=1;
				dis(mat);
			}
		}
		if (i!=4 && k==0)
		{
		play2(mat);
		ch=check(mat);
		if (ch==' ')
		dis(mat);
		else
		{
			if (ch=='X')
			{
				printf("Player one win\n");
				k=1;
				dis(mat);
			}
			else 
			{
				printf("Player two win\n");
				k=1;
				dis(mat);
			}	
		}
		}
		if (k==1)
		break ;
	}
	if (k==0)
{	printf("Tie");} //dis(mat);}
}
void dis(char mat[3][3])
{
	int i, j ;
	printf("\n");
	for (i=0;i<3;i++)
	{
		printf(" %c | %c | %c ",mat[i][0],mat[i][1],mat[i][2]);
		if (i!=2)
		printf("\n---|---|---\n");
	}
	printf("\n\n");
}
void play1(char mat[3][3])
{
	
	int x, y;
	printf("Player 1\n");
	scanf("%d",&y);
	x=0;
   if (y<=3)
  x=0;
  else if (y<=6)
{  x=1;y=y-3;}
  else if (y<=9)
{  x=2;y=y-6;}
 y--;
  	if (mat[x][y]!=' ')
  	{
  		printf("Invalid Entry\n");
		 play1(mat);	
	}
  	else
  	mat[x][y]='X';	
  	system("cls");
}
void play2(char mat[3][3])	
{
	
	int x, y;
	printf("Player 2\n");
  scanf("%d",&y);
  if (y<=3)
  x=0;
  else if (y<=6)
  {
 	 x=1;
  	y=y-3;
  }
  else if (y<=9)
  {  
	x=2;
  	y=y-6;
  }
  y--;
  if (mat[x][y]!=' ')
  {	 
 	printf("Invalid Entry\n");
 	play2(mat);
   }	
  	else
	mat[x][y]='O';
  system("cls");
  	
} 
char check (char mat[3][3])
{
	int i  ;
	for (i=0;i<3;i++)
	if (mat[i][0]==mat[i][1] &&mat[i][1]==mat[i][2])
	return mat[i][0];
	for (i=0;i<3;i++)
	if (mat[0][i]==mat[1][i] && mat[1][i]==mat[2][i])
	return mat[0][i];
	if (mat[0][0]==mat[1][1]&&mat[1][1]==mat[2][2])
	return mat[0][0];
	if (mat[0][2]==mat[1][1] && mat[1][1]==mat[2][0])
	return mat[0][2];
	return ' ';
	}
