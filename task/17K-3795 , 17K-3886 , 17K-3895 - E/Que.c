#include<stdio.h>
#include<stdlib.h>
void func1(int que[],int n);
int cnt=0 ;
void func2(int que[],int n,int l){
	int b ,i,del,j;
	printf("Enter\n1:For 1st in 1st out :\n2:For Delete specific Index element :\n");
	scanf("%d",&b);
	if (cnt!=n-1)
	{
		if (b==1)
		{
			for (i=0;i<(n-cnt);i++)
			que[i]=que[i+1];
			for (i=0;i<(n-cnt-1);i++)
			printf("%d ",que[i]);
		}
		else if (b==2)
		{
			printf("Enter the index of the number you want to delete :");
			scanf("%d",&del); 
			del--;
			for (j=del;j<n-1;j++)
			que[j]=que[j+1];
			for (i=0;i<(n-cnt-1);i++)
			printf("%d ",que[i]);		
		}
		if (l==1)
		{
			printf("\n\nEnter the number which you want to Insert :");
			scanf("%d",&que[n-cnt-1]);
			for (i=0;i<n;i++)
			printf("%d ",que[i]);
		}
		else
		cnt++;
		func1(que,n);
	}
	else
	{
		printf("QEUE is Empty"); exit(0);
	}
}
void func1(int que[],int n){
	int l ;
	printf("\n\nDo You want to insert any more ?\nEnter 1: YES 2: NO\n");
	scanf("%d",&l);
	if (l==1)
	func2(que,n,l);
	else if (l==2)
	{
		func2(que,n,l);	exit (0);
	}
	else
	printf("INVALID");
}
void main (){
	int n;
	printf("How many number you want to enter :\n");
	scanf("%d",&n);
	int que[n],i;
	for (i=0;i<n;i++)
	{
		printf("Enter the %d number : ",i+1); 
		scanf("%d",&que[i]);
	}
	printf("MAX\n");
	func1(que,n);
}
