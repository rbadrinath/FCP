#include <stdio.h>

void main(){
		// See https://en.cppreference.com/w/c/language/ascii
		// Print out as integer values
	        printf("%d %d %d %d %d %d\n", 65, 0x41,
                                  0101, 0b01000001,
                         (int) 659.9999e-1, (int ) 'A');
		// Print out as char values
	        printf("%c %c %c %c %c %c\n", (char) 65, (char) 0x41,
                                  (char) 0101, (char) 0b01000001,
                         (char) 659.999e-1, 'A');
		// Print out as float values
	        printf("%f %f %f %f %f %f\n", (float) 65, (float) 0x41,
                                  (float) 0101, (float) 0b01000001,
                         659.9999e-1, (float) 'A');






		int i;
		short int si;
		long int  li;
		float f;
		double d;
		long double ld;
}
