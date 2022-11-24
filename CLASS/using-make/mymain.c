#include <stdio.h>
#include "ops.h"

void main(){
	int i;
	i = test();
	printf("%d\n",i);
	int n=0;
	n?printf("A\n"):printf("B\n");
	n++;
	n?printf("A\n"):printf("B\n");

	float p1x,p1y;
	testdiv();
	enum ranks r=fourth;
	printf("%d\n",r);
}
