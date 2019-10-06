#include<stdio.h>
float main ()
{
	float a, b, c, d, e, f, g, h, i, j, k, l ;
	printf("Enter following no a, b, c, d, e, f, g, h\n");
	scanf("%f%f%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f, &g, &h);
	i = (1+(2*a))/3 ;
	j = (4*(b+c)*(5-d-e))/f;
	k =  (6*(7/g)+h);
	l = i + j - k ;
	printf("%f",l);
	return 0 ;
	
}
