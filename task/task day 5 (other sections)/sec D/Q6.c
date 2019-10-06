#include<stdio.h>
main()
{
	char a ;
	unsigned char b ;
	signed char c ;
	short d;
	unsigned short e;
	int f;
	unsigned int g;
	long h ;
	unsigned long i;
	float j;
	double k;
	long double l;
	printf("Size of char %d byte\nSize of unsigned char %d byte\nSize of signed char %d byte\nSize of short %d bytes\nSize of unsigned short %d bytes\nSize of int %d bytes\nSize of unsigned int %d bytes\nSize of long %d bytes\nSize of unsigned long %d bytes\nSize of float %d bytes\nSize of double %d bytes\nSize of long double %d bytes",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e),sizeof(f),sizeof(g),sizeof(h),sizeof(i),sizeof(j),sizeof(k),sizeof(l));
	return 0 ;
}
