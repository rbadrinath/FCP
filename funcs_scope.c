#include <stdio.h>
// Aim show how functions and their prototypes work
// notion of declare before use - just move around the function
// same holds for variables.
// show prototytpe
// show scope

char * str = "global hello" ;

void say(char * str){
	printf("%s\n",str);
}

void print_mystr(){
	printf("%s\n",str);
}

void main(){
	char * str = "local hello";
	say("hi");
	say("bye");
	say(str);
	print_mystr();
}
