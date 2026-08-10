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

	printf("main at    : %p\n",main);
	printf("Global     : %p\n",&g);
	printf("malloc at  : %p\n",malloc(100));
	printf("main locals: %p %p %p\n",&i,&j,&k);
	testaddress(i,j,k);
}
