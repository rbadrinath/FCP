#include <stdio.h>
// Aim show how functions and their prototypes work
// notion of declare before use - just move around the function
// same holds for variables.
// show prototytpe
// show scope

void sayhi(){
	printf("hi\n");
}

void saybye(){
	printf("bye\n");
}

int getnumber(){
	return(5);
}

void main(){
	sayhi();
	saybye();
	printf(" I got : %d\n",getnumber());
}
