#include <stdio.h>
#include <stdlib.h>

// Using malloc to allocate an array of integers
void main(){
	int * p;
	p = malloc(50*sizeof(int));
	for(int i=0;i<50;i++)
		printf("%d ",p[i]);
	printf("\n");
}

// Using malloc to allocate  multiple such arrays and put them into
// into an array of pointers!
/*** 
void main(){
	int * p[5]; // array of pointers to integers
	p[0] = malloc(50*sizeof(int));
	for(int i=0;i<50;i++)
		p[0][i]=i;
	for(int i=0;i<50;i++)
		printf("%d ",p[0][i]);
	p[1]  = malloc(50* sizeof(int));
	printf("\n");
}
***/
