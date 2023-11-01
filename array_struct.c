#include <stdio.h>
#define konstant 8.98e09

// This is a structure to represent a charged particle on a plane.
struct particle {
	float x;		// x position on a plane
	float y;		// y position on a plane
	float q;		// charge in culomb
};

// To read one particle into the given parameter
void read_a_particle(struct particle *p){
}

// To read an integer n from the user
// allocate an array to hold n particles
// Now read the particles one by one into a[0]..a[n-1]
// return the pointer to the allocated array
struct particle * get_new_particle_array(int *length){
	struct particle *arrayp; 
	// write all the code to  read n, then malloc, then read n particles
	// set *length to the number of particles, ie value of n
	return arrayp;
}

// To print a particle array with n particles
void print_particle_array( struct particle * p, int n){
	
}

// To join(concatenate) two particle arrays into a new one
struct particle * join_particle_arrays(struct particle a1[],int n1, struct particle a2[], int n2){
	// new array has a1[0]..a1[n1-1] a2[0]..a2[n2-1]
	// allocate then copy particles
	// return pointer to the newly allocated array

}

// find the force between two particles
float find_force(struct particle p1, struc particle p2){
	float force;
	// by definition force = konstant * (q1*q2)/(r*r)
	return force;
}

// sorting an array of particles (just to show sorting on structure arrays)

// First we need a greater than function: returns  1 if and only if a[i]>a[j]
//    else it returns 0
int greater(struct particle *a, int i, int j){
	if(a[i].x > a[j].x)
		return 1;
	if( (a[i].x == a[j].x) && (a[i].y > a[j].y) )
		return 1;
	return 0;
}
// We also need a way to swap to particles in an array
void swap(struct particle *a, int i, int j){
	struct particle t;
	t = a[i];
	a[i]=a[j];
	a[j]=t;
}

// Now the core bubble sort algorithm - really no change
void sort(struct particle *a, int n){
	for(int hp=n-1;hp>0;hp--)
		for(int i=0;i<hp;i++)
			if(greater(a,i,i+1))
				swap(a,i,i+1);
}

void main(){
	struct point * a1, * a2, * a3;
	int n1,n2,n3;
	// n1 is the count for a1;     n2 for a2;    n3 for a3

	a1=read_particle_array(&n1);
	a2=read_particle_array(&n2);

	a3=join_particle_arrays(a1,n1, a2,n2 )
	n3=n1+n2;

	print_particle_array(a3,n3);

	int i1,i2;
	scanf("%d %d", i1, i2); /// read indices of two particles of a3
	printf("%e\n", find_force(a3[i1],a3[i2])); // print the force between them


	// Good practice to free up the arrays.
	// But in this case it doesnt matter at all, since program exits
	free(a1);
	free(a2);
	free(a3);
}
