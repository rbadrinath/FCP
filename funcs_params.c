#include <stdio.h>
// Aim show how functions and their prototypes work
// notion of declare before use - just move around the function
// same holds for variables.
// show prototytpe
// show scope

void say(char * str){
	printf("%s\n",str);
}


void main(){
	say("hi");
	say("bye");
}
