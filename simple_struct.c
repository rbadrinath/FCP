#include <stdio.h>
#include <stdlib.h>

// This is a common way to define a new aggregate type called a structure
struct complex {
	float real;
	float imaginary;
};
// The above structure has two "field"s or "member"s called "real" and
// "imaginary" each of them is as good as a separate variable
// but clubbed together into one larger variable... we'll see an example


// Here is another interesting structure
struct list {
	int v;
	struct list * next;
};
// The above has two members one of which is a pointer type.

//
void read_complex( struct complex * v){
	scanf("%f %f",&(*v).real, &(*v).imaginary);
}
void print_complex( const struct complex * v){
	printf("%f %f",(*v).real, (*v).imaginary);
}

void add_complex( const struct complex * u, 
		  const struct complex * v, struct complex *w){
	(*w).real =  (*u).real+(*v).real;
	(*w).imaginary = (*u).imaginary +(*v).imaginary ;
}

// note that (*v).real and v->real are the same
void print_2_complex( const struct complex * v){
	printf("%f %f",v->real, v->imaginary);
}

void print_3_complex( const struct complex v){
	printf("%f %f",v.real, v.imaginary);
}



void main(){
  struct complex a,b,c;

  //1. The members of structures are access with the "." operator
  a.real=5;
  a.imaginary=10;
  printf("%f %f\n",a.real,a.imaginary);

  /*
  //2. also we can have pointers to structures
  struct complex * p;
  p=&a;

  //3. Note that *p is a structure so it has real and imaginary parts
  printf("%f %f\n", (*p).real, (*p).imaginary);
  // Note that we can replace (*p).real by p->real .. a C language convenience
  
  //4. We can also malloc structures
  p=malloc(sizeof(struct complex));
  p->real=55;
  p->imaginary=100;
  printf("%f %f\n", p->real, p->imaginary);
  */

  /*
  //5. We can treat structure variables just like integers and other basic types:
  printf("\nGive me real and imaginary parts of the first number:");
  read_complex(&a);
  printf("\nGive me real and imaginary parts of the second number:");
  read_complex(&b);
  add_complex(&a,&b,&c);
  printf("\nReal and imaginary parts of the sum are:");
  print_complex(&c);
  */

  //6. We can also create arrays of structures, just like basic types 
  /*
  struct complex x[3];
  printf("\nGive me real and imaginary parts of the first number:");
  read_complex(&x[0]);
  printf("\nGive me real and imaginary parts of the second number:");
  read_complex(&x[1]);
  add_complex(&x[0],&x[1],&x[2]);
  printf("\nReal and imaginary parts of the sum are:");
  print_complex(&x[2]);
  */

  //7. We can also pass value (unlike arrays, but like other basic types)
  /*
  printf("\nReal and imaginary parts of the sum are (AGAIN):");
  print_3_complex(&x[2]);
  */

  //8. Just a note for those who know C++ or another object oriented language:
  // The concept of a "class" is nothing but a struct with
  // functions too added as fields/members.... think about it!
  // Of course, there are many other features of object-oriented languages.
   
  //9. Exercise
  // Define an array of complex  numbers.
  // Read into the array some number of complex numbers
  // Sort them using bubble sort. Use the code for bubble sort already available
}


