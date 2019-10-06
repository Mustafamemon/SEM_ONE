#include<stdio.h>
#include<math.h>
#include<string.h>
/*void main()
{
	long long int num,hex=0,temp,i=1,rem,a;
	char ch[100];
	scanf("%d",&a);
	if (a==1)
	{
		i=1;
	//binary to hexa;
		printf("Enter the binary number : ");
		scanf("%lld",&num);
		temp=num;
		while (num!=0)
		{
		rem=num%10;
		hex=hex+rem*i;
		i=i*2;
		num=num/10;
		}
		printf("Binary=%lld to Hexadecimal %llX",temp,hex);	
	}
	else if (a==2)
	{
		//deci to hexa
		printf("Enter the deci number : ");
		scanf("%lld",&num);
		printf("Decimal=%lld to Hexadecimal %llX",num,num);
	}
	else if (a==3)
	{
		i=0;
		//hexa to deci
		printf("Enter the hexa number : ");
		scanf("%s",&ch);
		rem=strlen(ch);
	while (ch[i]!='\0')
	{
		rem--;
		if (ch[i]>='0' && ch[i]<='9')
		temp=ch[i]-48;	
		else if (ch[i]>='A' && ch[i]<='F')
		temp=ch[i]-55 ;;
		hex=hex+(temp*pow(16,rem));
		i++ ;
	}
	printf("%lld\n",hex);
	}
	else if (a==4)
	{
	//deci to binary
	printf("Enter the deci number : ");
	scanf("%lld",&num);
	while (num!=0)
	{
		rem=num%2;
		num=num/2;
		hex=(hex*10)+rem;
	}
	printf("%lld",hex);
	}
	else if (a==5)
	{
		printf("Enter the deci number : ");
	scanf("%lld",&num);
	while (num>8)
	{
		rem=num%8;
		num=num/8 ;
		hex=(hex*10)+rem;
	}
	hex=(hex*10)+num;
	printf("%lld",hex);
	}
}

#include <math.h>*/

long long convertOctalToBinary(int octalNumber);
int main()
{
    int octalNumber;

    printf("Enter an octal number: ");
    scanf("%d", &octalNumber);

    printf("%d in octal = %lld in binary", octalNumber, convertOctalToBinary(octalNumber));

    return 0;
}

long long convertOctalToBinary(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    long long binaryNumber = 0;

    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
        printf("%d \n",decimalNumber);
    }

    i = 1;

    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }

    return binaryNumber;
}
