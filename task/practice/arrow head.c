#include<stdio.h>
void main ()
{
if (getch() == '\033') {
    getch();
    switch(getch()) {
        case 'A' :
        	printf(">");
            break;
        case 'B':
        	printf(">");
            break;
        case 'C':
        	printf(">");
            break;
        case 'D':
        	printf(">");
            break;
    }
}
}
