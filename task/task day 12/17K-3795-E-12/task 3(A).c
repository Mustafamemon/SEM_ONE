#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[] )
{
	int* ptr =(int *)malloc(4);
	free(ptr);
	scanf("%d",*ptr);
	return EXIT_SUCCESS;
}
