#include<stdio.h>
#include<math.h>
#include<string.h>
long long int func1(int a)
{
	long long int temp=0,i=0,rem,hex=0;
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
		hex=hex+(temp*pow(a,rem));
		i++ ;
	}
	return hex;
}
void func2 (int a,long long int num)
{
	long long int hex=0,temp,i=1,rem;
	i=1;
	temp=num;
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
void func3(int a)
{
	long long int num,temp,rem,hex=0;
	printf("Enter the Number : ");
	scanf("%lld",&num);
	if (a==1)
	printf("Deciaml = %lld to Hexadecimal %llX",num,num);	
	else if (a==2)
	printf("Decimal = %lld to Octal %llo",num,num);
	else
	{
		temp=num ;
	while (num!=0)
	{
		rem=num%2;
		num=num/2;
		hex=(hex*10)+rem;
	}
	printf("Decimal= %lld to Binary = %lld",temp,hex);
	}	
}
long long int func4(int hex)
{
	long long int temp=0,i=1,rem;
	while (hex!=0)
	{
		rem=hex%2;
		hex=hex/2;
		temp=temp+rem*i;
		i=i*10;
	}
	return temp ;
}
int main()
{
	long long int  a,res=0,res1=0,num;
	printf("Enter\n1: Hexa to Decimal\n2: Octal to Decimal\n3: Binary to Decimal\n4: Binary to Hexa\n5: Binary to Octal\n6: Decimal to Hexa\n7: Decimal to Octal\n8: Decimal to binary\n9: Octal to Binary\n10: Hexa to Binary\n11: Hexa to Octal\n12: Octal to Hexa\n");
	scanf("%d",&a);
	printf("\n\n");
	if (a==1)
	{
		res=func1(16);printf("Decimal = %lld\n",res);
	}
	else if (a==2)
	{
		res=func1(8);printf("Decimal = %lld\n",res);
	}	
	else if (a==3)
	{
		res=func1(2);printf("Decimal = %lld\n",res);
	}
	else if (a==4)
	{
		printf("Enter the binary number : "); scanf("%lld",&num); func2(1,num); 
	}
	else if (a==5)
	{
		printf("Enter the binary number : "); scanf("%lld",&num); func2(2,num); 	
	}
	else if (a==6)
	func3(1);
	else if (a==7)
	func3(2);
	else if (a==8)
	func3(3);
	else if (a==9)
	{
		res=func1(8); res1=func4(res) ;printf("Binary = %lld\n",res1);	
	}
	else if (a==10)
	{
		res=func1(16); res1=func4(res) ;printf("Binary = %lld\n",res1);
	}
	else if (a==11)
	{
		res=func1(16);res1=func4(res);func2(2,res1);
	}
	else if (a==12)
	{
		res=func1(8);res1=func4(res);func2(1,res1);
	}	
}
