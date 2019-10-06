#include<stdio.h>
int vol(int volu);
void main ()
{
	int i,n,volu,tvol=0,res=0;
	printf("Enter the number of carton :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
	volu=vol(volu);	
	tvol=tvol+volu;
	}	
	if (tvol> 2000001)
	printf("Yor total volume is greater than 2000000 and is %d",tvol);
	else 
	printf("Yor total volume is %d ",tvol);
}
int vol(int volu)
{
	int z,f,s,tvol=0;
	printf("Enter the Zero Dimension :");
	scanf("%d",&z);
	printf("Enter the First Dimension :");
	scanf("%d",&f);
	printf("Enter the Second Dimension :");
	scanf("%d",&s);
	if  (z==0 && f==0 && s==0)
	{
		
		volu=30*30*30;
	//	return volu ;
		
	}
	else if  (f==0 && s==0)
	{
		volu=z*30*30;
	//	return volu ;
	}
	else if  (z==0 && s==0)
	{
		volu=30*f*30;
	//	return volu ;
	}
	else if  (f==0 && s==0)
	{
		volu=30*30*s;
	//	return volu ;
	}
	else 
	{
		volu=z*f*s;
	//	return volu ;
	}	
	return volu;
}
