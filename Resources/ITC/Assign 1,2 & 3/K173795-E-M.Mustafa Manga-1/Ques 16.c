#include<stdio.h>
void main ()
{
	int j=0,i; 
	char sen[80];//="my name is mustafa i am studying cs from fast nuces";
	printf("enter the sentence\n");
	while (sen[j]!='\n')
	{
		j++;
		scanf("%c",&sen[j]);
	}
	for(i=1;i<=j;i++)
	{
		if (sen[i]=='a'||sen[i]=='e'||sen[i]=='i'||sen[i]=='o'||sen[i]=='u');
	//	printf("*");
		else
		printf("%c",sen[i]);
	}
	
}
