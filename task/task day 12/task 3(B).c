#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
	int** A;
	A = (int**)malloc(2*sizeof(int*));
	foo(&A);
	return 0;
}
foo(int*** array){
		int n=4,i ;
	int** arrayint = (int**)malloc(2*n*sizeof(int*));
	for (i=0;i<n;i++)
	arrayint[i] = (*array)[i];
	free(*array);
	array = &arrayint;
}

