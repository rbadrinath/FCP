#include <stdio.h>
#include <stdlib.h>

int g;


void testaddress(int a, int b, int c){
	int i,j,k;
	printf("function locals: %p %p %p\n",&i,&j,&k);
	printf("function params: %p %p %p\n",&a,&b,&c);
	return;
}

void main(){
	int i,j,k;

	printf("main locals: %p %p %p\n",&i,&j,&k);
	printf("Global     : %p\n",&g);
	printf("dynamic    : %p\n",malloc(sizeof(int)));
	testaddress(i,j,k);
}
