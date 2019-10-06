#include<stdio.h>
#include<conio.h>
void Input_Matrix(int,int,int[100][100]);
void Display_Transpose(int,int,int[100][100]);
void Transpose_Matrix(int,int,int[100][100]);

int main()
{
	int i,j,r,c,matrix[100][100],matrix2[100][100];
	printf("Enter no. of rows: ");
	scanf("%d",&r);
	printf("Enter no. of columns: ");
	scanf("%d",&c);
	printf ("\n");
	Input_Matrix(r,c,matrix);
	Display_Transpose(r,c,matrix);
	Transpose_Matrix(r,c,matrix);	
	
}

void Input_Matrix(int x,int y,int matrix1[100][100])
{
	int i,j;
	for (i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("Enter element (%d,%d): ",i+1,j+1);
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("\n  Matrix: \n");
}

void Display_Transpose(int x,int y,int matrix1[100][100])
{
	int i,j;
	for (i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%5d ",matrix1[i][j]);
		}
		printf("\n");
	}
}

void Transpose_Matrix(int x,int y,int matrix[100][100])
{
	int i,j,matrix2[100][100];
	for (i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{	
			matrix2[j][i]= matrix[i][j];
		}
	}
	printf("\n  Transpose\n");
	Display_Transpose(y,x,matrix2);
}
