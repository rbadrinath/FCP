#include <stdio.h>
// Aim 1. Show how scope works for locals, parameters and globals
// 

int g = 999 ;	      // This is a gloabal variable

void showthis(int g){ // remember this local variable called g
		      // receives a value when call is made
		      // This name masks any global name g, inside this function
	printf("inside showthis %d\n",g);
	g = 666;
}

void printg(){
	printf("inside printg   %d\n",g);
}

void main(){
	int g = 111;	// This is a local variable called g
			// It is initialized a value in this function
			// This name masks any global name g, inside this func
	showthis(555);
	showthis(g);
	showthis(g);
	printg();
	{
		int g=0;
		printf("main in block %d\n",g);
	}
	printf("main after block %d\n",g);
}
