#include<stdio.h>
int main()
{
	int P, E, N , Z =0 ; // (NO OF P=proton E=electron , N=neutron) Z= Atomic Mass
	P=N=E=8;
	float MP , MO = 0 ; // MP=mass of proton ,MO=mass of oxygen
	Z= P + N;
	printf("Enter Mass of Proton :\n");
	scanf("%e", &MP); 
	MO=Z*MP;
	printf("Mass of oxygen= %.3e gm ",MO);
	return 0 ;	
}
