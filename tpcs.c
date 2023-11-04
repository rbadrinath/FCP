#include <stdio.h>
// this #include "tcps.h" declares the function prototype of test()
//                   also  declares the global   extern  int num
#include "tpcs.h"

int num= 0B00001000;
int x=1;		// what if we made x to be static

int test(){
	x++;
	return num;
}
