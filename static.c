#include <stdio.h>
int counter(){
	// static variables are:
	// 	scope: like local variables in terms of scope or visibility; 
	// 	life:  like global they exist throughout
	int static c=0;	// done only once, just like a global
	c++;		// cod executes on all calls, as usual
}

void main(){
	for(int i=0;i<10;i++)
		counter();	// Here we are just neglecting the reurn value
	printf("%d\n",counter());
}
