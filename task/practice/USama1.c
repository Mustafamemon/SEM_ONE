#include<stdio.h>
int main() 
{
	int i,t;
	scanf("%d", &t);
	int n,s,x,b,a;
	for(i=0;i<t;i++)
	{
		{
			scanf("%d %d %d", &n, &s,&x);
			b=1;
			if(x>s || (s-x)%2!=0)
			b=0;
			else
			{
				printf("Hello");
				if(n==1)
				{
					if(s!=x)
					b=0;
						printf("hello");
				}
				else if(n==2)
				{
					a = (s-x)/2;
					if((a&x)!=0)
					b=0;
						printf("Helo");
				}	
			}
			
		}
			if(b==1)
			printf("Yes\n");
			else
			printf("No\n");
	}
	return 0;
}
