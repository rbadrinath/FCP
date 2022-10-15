#include <stdio.h>
#include <stdlib.h>

// Using malloc to allocate an array of integers
void main(){
	void allocate_and_fill_arrays(int *q[], int n);
	void free_up_arrays(int *q[], int n);

	int * p;
	p = malloc(50*sizeof(int));
	for(int i=0;i<50;i++)
		p[i]=i;

	//  IMPORTANT: when the program finishes all the memory 
	//  allocated to the program including dynamic memory
	//  is freed up.
	//
	//  However as a discipline, when you no longer need 
	//  the memory free it up:

	free(p);

	// note that at this point we cannot use whatever p points to!
	// printf("%d \n",p[0]);  may work, but it is a problem!

	int * q[5]; // array of pointers to integers
	allocate_and_fill_arrays(q,3);
	free_up_arrays(q,3);
}

// Using malloc to allocate  multiple such arrays and put them into
// into an array of pointers!
void allocate_and_fill_arrays(int *q[],int n){
	for(int i=0;i<n;i++)
		q[i] = malloc(50*sizeof(int));
	// now each q[i] is an array and we can fill it as before
	// eg here we will fill one of the allocated arrays:
	for(int i=0;i<50;i++)
		q[0][i]=i;
}

// free up the arrays in q[]
void free_up_arrays(int *q[], int n){
	for(int i=0;i<50;i++)
		printf("%d ",q[0][i]);
	printf("\n");
	for(int i=0;i<n;i++)
		free(q[i]);
}
