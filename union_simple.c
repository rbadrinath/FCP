#include <stdio.h>
#define SIZE 4

// a union is very much like a structure in appearance
union id {
	int id_i;
	char id_s[20];
};

// Here is a simple declaraction
union id g;
// Here note that the space allocated the maximum sized field
// so here it is max(4,20) ie 20 bytes

// Here is a function to print and see sizes of the variable g and its fields
void printsizes(){
	printf("sizeof(g)=%ld,  sizeof(g.id_i)=%ld,   sizeof(g.id_s)=%ld\n\n",
		sizeof(g), sizeof(g.id_i), sizeof(g.id_s));
}

// This function reads a 'union id' into a variable whos pointer is given
// The return value is the type of the id read
// User will give type 0 to indicate integer
//            and type 1 to indicate string
int read_id(union id * x){
	int t;
	scanf("%d",&t);
	t==0?scanf("%d",&x->id_i):scanf("%s",x->id_s);
	return t;
}

// print a 'union id' given its type
void print_id(int t, union id x){
	t==0?printf("%d",x.id_i):printf("%s",x.id_s);
}

void main(){
	// This stores the ids
	union id id_vals[SIZE];
	// This stores the type information for each id
	int id_types[SIZE];	

	// printing the sizes
	printsizes();

	// lets read SIZE number of ids into the id_vals array
	// lets also make sure to remember their 
	//           types in the id_types array in the corresponging position
	//
	for(int i=0;i<SIZE;i++)
		id_types[i]=read_id(&id_vals[i]);

	// Now we print the id_vals and give the type in each case
	for(int i=0;i<SIZE;i++)
		print_id(id_types[i],id_vals[i]),printf("\n");
}
