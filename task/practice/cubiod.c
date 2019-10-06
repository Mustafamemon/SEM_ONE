#include<stdio.h>
void main ()
{
	int n[3],x=0,y=0,i,vol=1,t,a=0;
	scanf("%d",&t);
	while(a!=t)
	{
		vol=1;
		a++;
		for (i=0;i<3;i++)
	scanf("%d",&n[i]);
	for (i=0;i<3;i++)
	{
		if (x<n[i])
		x=n[i];
		vol=vol*n[i];
	}
	for (i=0;i<3;i++)
	{
		if (x==n[i]);
		else if (y<n[i])
		y=n[i];
	}
	if (vol==(y*y*y))
	printf("Tada!!! It’s a Right Box Cuboid\n");
	else
	printf("Nah!!! It’s just a Box\n");
	}
	
	
	
	
}
