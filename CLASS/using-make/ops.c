
#include <stdio.h>
#include "ops.h"

void testf(){
	int i=0;
	int j=1;
	if (i < j)
		printf("yes");
}

void testdiv(){
	if ( 5/2 == 5.0/2 )
		printf("YES\n");
	else
		printf("NO\n");
}
int test(){
	return 0B00001000;
}
