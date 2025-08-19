#include <math.h>
#include <stdio.h>
// We wish to show how integration can be done over an interval for some
// function that we can evaluate.

// gf is the function we wish to integrate
float gf(float x){
	return exp(-x*x);
}


// Main idea: integration is by adding little rectangles
//            starting from a upto b

int main(){
	// interval for integration
	float a,b;
	scanf("%f%f",&a,&b);


	// number of rectangles
	int steps=1000;

	// rectangle width
	float h=(b-a)/steps;

	// this is the integral value
	float sum=0;

	// x is the bottom left of the rectangle
	// so gf(x) will be the height of the rectangle
	float x=a;
	int i=0;

	while(i<steps){
		sum+=h*gf(x);
		x=x+h;
		i=i+1;
	}

	printf("%f\n",sum);
	printf("For comparison: sqrt(pi)=%f\n",sqrt(M_PI)/2);
}
