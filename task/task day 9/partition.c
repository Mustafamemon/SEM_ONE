#include<stdio.h>
void partition(int n);
int main()
    {
        int num;
        printf("\nEnter a number to perform integer partition: ");
        scanf("%d", &num);
        partition(num);
        return 0;
    }
void printarray(int p[], int n)
    {
        int i;
        for ( i = 0 ;i <n; i++)
           printf("%d ", p[i]);
        printf("\n");
}
void partition(int n)
    {
        int p[n]; 
        int k = 0;  
        p[k] = n; 
        int j;
        while (1)
        {
            printarray(p, k+1);
            j = 0;
            while (k >= 0 && p[k] == 1)
            {
                j += p[k];
                k--;
        	}
            if (k < 0) 
			 return ;
			 p[k]--;
            j++;
            while (j > p[k])
            {
                p[k+1] = p[k];
                j= j - p[k];
                k++;
			}
            p[k+1] = j;
            k++;
        }
    }
    
