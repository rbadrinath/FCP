#include <stdio.h>
int main(int argc, char * argv[]){
	int i;
	for ( i=0;argv[i]!=NULL;i++)
		printf("%d %s\n",i,  argv[i]);

	/*
	for (i=0;i<argc;i++)
		printf("%d %s\n",i,  argv[i]);
	*/


	return i; // return value from main() is the exit tatus
}
