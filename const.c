#include <stdio.h>

void printout(int const x, int const y){
	x = 10, y=30;
	printf("x = %d and y = %d\n",x,y);
}

void main(){
	int const x=1100;
	int const * p;
	int const * q;
	int * const pp;
	int * const qq;
	int i=10;
	int j=20;

	printout(50,100);
}
