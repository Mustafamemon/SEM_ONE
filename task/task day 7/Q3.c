
#include<Stdio.h>
void main ()
{
	int i ,j ,k,h,w;
	printf("Enter the height :");
	scanf("%d",&h);
	/*if(h%2==0)
	h=h+1;*/
	printf("Enter the width :");
	scanf("%d",&w);
	for (i=1;i<=h;i++)
	{
		for (j=1;j<=w;j++)
		{
			if(j%2==0 && i%2==0)
			printf("0");
		else
			printf("*");
		}
	printf("\n");
	}
}
