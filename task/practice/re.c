#include<stdio.h>
#include<string.h>
int flag=1;
void func(char ch[],int i ,int a)
{
	
	char ch1[10];
	if (a!=0)
	{
		if (ch[a-1]==ch[i])
		{
			flag=0 ;
			return func(ch,++i,--a);	
		}
		else
		{
			flag=1;
			printf("string is not pelindrome");
		}	
	}
	if (flag==0)
	printf("string is pelindrome");
}
void main ()
{
	char ch[100];
	int a ;
	printf("ENTER THE STRING\n");
	gets(ch);
	a=strlen(ch);
	func(ch,0,a);
}


/*

#include<stdio.h>
#include<string.h>
void check(char arr[],int index)
{
	int len = strlen(arr) - (index+1);
	if (arr[index] == arr[len])
	{
		if (index+1==len|| index==len)
		{
			printf("Your Entered Name is Palindrome");
			return;
		}
		else 
		check(arr,index+1);
	}
	else 
	printf("Entered name is not palindrome");
	
}
int main()
{
	char arr[20];
	printf("Enter name to be checked:\n");
	scanf("%s",arr);
	check(arr,0);
}*/
