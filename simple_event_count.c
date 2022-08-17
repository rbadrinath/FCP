#include <stdio.h>
#include <stdlib.h>

//
// A coin is flipped twice in an experiment
// (obsx,obsy) are the observed values from the first and second flip.
// For convenience an observation=0 means tails and an observation=1 is heads
//    so possible outcomes are (0,0), (1,0), (0,1) and (1,1)
// We want to count frequency of both being tails i.e., occurence of (0,0)
// on repeating the experiment 100 times
//     Ideally the observed frequency should be close to 1/4.
#define NEXP 100		// We can change this
void main(){
    int i;
    int obsx,obsy,event_00_count;
    float observed_freq;
    event_00_count=0;
    // srandom(0);			// neglect this initially
    for (i=0; i < NEXP ; i++) {
	    // (obsx,obsy) are the results of the two flips
	    obsx=random()%2;
	    obsy=random()%2;
	    if (obsx==0 && obsy==0)
		    event_00_count++;
    }
    observed_freq=(1.0*event_00_count)/NEXP;
    printf("00 occurred with frequency: %f\n",observed_freq);
}
