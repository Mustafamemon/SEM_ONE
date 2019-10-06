#include <stdio.h>
void func ();
void main()
{
	int n;
	printf("Enter value of n :\n");
    scanf("%d", &n);
    func(n);
}
void func (n)
{
    int i, j,k;
     for(i=(n+1); i>=1; i--)
     {
     for(j=i; j>=1; j--)
        {
            printf(". ");
        }  
        for(k=(n+1);k>=i; k--)
        {
            printf("o");
        }
     
    
        printf("\n");
    }
     for(i=2; i<=(n+1); i++)
    {
     for(j=1; j<=i; j++)
        {
            printf(". ");
        }
        for(k=(n+1); k>=i; k--)
        {
            printf("o");
        }

        printf("\n");
    }
}    
   
