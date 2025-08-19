#include <stdio.h>
// a simple program to illustrate the difference between actual real numbers
// and C's (and teh CPUs) floating point numbers
// Idea is to define a few real numbers and do simple arithmetic
int main(){
	//float a=1.07, b=3.1412, c=2.71823, d=6.023;
	//float a=6.6, b=3.1412, c=2.7182, d=6.023;
	float a=6.62632293, b=3.1415932982, c=2.718234894, d=6.023345;

	// If these were real numbers, then by associativity 
	// we should see the same number twice below
	printf("%f %f %f\n", a*(b*(c*d)),((a*b)*c)*d,(a*b)*(c*d));
}
