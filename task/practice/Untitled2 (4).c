#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
	long long int temp=0,i=0,rem, hex=0,bin[100];
	char ch[100];
	printf("Enter the number : ");
	scanf("%s",&ch);
	while (ch[i]!='\0')
	{
		if (ch[i]>='0' && ch[i]<='9')
		temp=ch[i]-48;	
		else if (ch[i]>='A' && ch[i]<='F')
		temp=ch[i]-55 ;
		i++;
		while (temp>1)
		{
			rem=temp%2;
			temp=temp/2 ;
			hex=(hex*10)+rem;
				printf("%lld\n",temp);
				printf("\t%lld\n",rem);
				printf("%lld\n",hex);
		}
		hex=(hex*10)+temp ;
		printf("%lld\n",hex);
	}
	printf("%lld\n",hex);
}
