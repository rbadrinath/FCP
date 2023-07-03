#include <stdio.h>

// functions are similar to what we are used to in mathematics.
// sin(x) where x is, say, pi/2 would be 1
// Lets write a function to compute the well known determinant

// This says what the function with the name determinant does with
// its parameters
float discriminant(float a, float b, float c){
	// the parameters are assumed to be from a qaratic equation:
	// ax^2 + bx + c = 0 
	return b*b - 4*a*c;
}


// In the main() function let's call the above function with
// specific parameter values
void main(){
	float a,b,c,d;
	a=1;
	b=0;
	c=-1;
	d = discriminant(a,b,c);	// This is a call to the function
	printf("%f\n",d);		// This is a call to the function

}
