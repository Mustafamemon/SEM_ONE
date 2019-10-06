#include<stdio.h>
int main()
    {
        int num,l = 0, j , i,k=1;
        printf("Enter a number :\n");
        scanf("%d", &num);
        int part[num];
        part[l] = num; 
       	while (k)
        {
        	for ( j = 0 ;j <l+1; j++)
          	printf("%d ", part[j]);
        	printf("\n");
            i = 0;
           while (l >= 0 && part[l] == 1)
            {
                i=i+ part[l];
               l--;
        	}
            if (l < 0) 
			 break ;
			 part[l]--;
            i++;
            while (i > part[l])
            {
                part[l+1] = part[l];
                i= i - part[l];
                l++;
			}
            part[l+1] = i;
            l++;
        }
}

	
