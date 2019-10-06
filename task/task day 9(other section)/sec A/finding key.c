#include<stdio.h>
void main ()
{
	int func[10]={1,7,2,3,3,9,6,5,9,4},i,key;
	printf("Enter the key ");
	scanf("%d",&key);
	for (i=0;i<=9;i++)
	{
		if (key==func[i])
	{
	printf("Yes , key exist at %d location\n",i+1);
//	break ;	
	}	
	}
	//f (i>9)
	//printf("key does not exist");
	
	
	
}
