/*#include<stdio.h>
void  main ()
{
	char str1[][9]={"16K-3795","15f-3705","15i-3894"} ;
	int i , j ;
	for (i=0;i<3;i++)
	{
		if (str1[i][1]=='6')
		str1[i][1]='5';
		else if (str1[i][1]=='5')
		str1[i][1]='6';
	}
	for (i=0;i<3;i++)
	{
		puts(str1[i]);
	}
}
*/
        #include <stdio.h>

        void foo(int*);

        int main()

        {

            int i = 10, *p = &i;

            foo(p++);

        }

        void foo(int *p)

        {

            printf("%d\n", *p);

        }
