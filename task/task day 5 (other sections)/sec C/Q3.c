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
	printf("char %d byte\nunsigned char %d byte\nsigned char %d byte\nshort %d bytes\nunsigned short %d bytes\nint %d bytes\nunsigned int %d bytes\nlong %d bytes\nunsigned long %d bytes\nfloat %d bytes\ndouble %d bytes\nlong double %d bytes",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e),sizeof(f),sizeof(g),sizeof(h),sizeof(i),sizeof(j),sizeof(k),sizeof(l));
	return 0 ;
}
