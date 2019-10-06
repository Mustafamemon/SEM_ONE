#include<stdio.h>
main()
{
	int  num, i=0;;
	printf("enter the num ");
	for (scanf("%d",&num);num>1;i++)
	{
		if (num%2==0)
		printf("\nnext value = %d",num/=2);
		else
		printf("\nnext value = %d",num=(num*3)+1);
	}
	printf("\nFinal value = %d, steps %d",num,i);
}
