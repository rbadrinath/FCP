#include <stdio.h>
#include <math.h>
int main(){   
	float const PI=3.14159;  
	float const delta=0.1; 		 // step size
	float const start=0, end=2*PI;   // integration limits
	float a=start,  e=end; 
	float t;  float s = 0;
	while( a < e) { 
		float t= sin(a);
		// printf("%f term is %f\n",a,t);
		s =  t*delta + s;
		a=a + delta;
   	}
	printf("Integral sin(x) from %f to %f  is %f\n",start, end, s);
}
