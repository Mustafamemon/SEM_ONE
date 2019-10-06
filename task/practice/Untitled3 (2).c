#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
	long long int num, temp=0,i=0,rem, hex=0,bin[100],a=0;
	char ch[100];
	printf("Enter the Number : ");
	scanf("%s",&ch);
	rem=strlen(ch);
	while (ch[i]!='\0')
	{
		rem--;
		if (ch[i]>='0' && ch[i]<='9')
		temp=ch[i]-48;	
		else if (ch[i]>='A' && ch[i]<='F')
		temp=ch[i]-55 ;
		hex=hex+(temp*pow(16,rem));
		i++ ;
	}
	printf("%lld\n",hex);
	temp=0;i=1;
	while (hex!=0)
	{
		rem=hex%2;
		hex=hex/2;
		temp=temp+rem*i;
		i=i*10;
	}
	printf("%lld\n",temp);
	num=temp;
	hex=0;
	i=1;
	while (num!=0)
	{
	rem=num%10;
	hex=hex+rem*i;
	i=i*2;
	num=num/10;
	}
	if (a==1)
	printf("Binary = %lld to Hexadecimal %llX",temp,hex);	
	else
	printf("Binary = %lld to Octal %llo",temp,hex);	
}

