#include <stdio.h>

void main(){
	int a[40];
	int *p[40];
	int (*q)[40];
	// usage
	p[0]=a;
	q=a;
	printf(" p = %p\n p+1 = %p\n diff = %d\n",p,p+1,(p+1) -  p);
	printf(" sizeof(a) = %lu\n sizeof(p) = %lu \n sizeof(q) %lu\n",
			sizeof(a), sizeof(p),sizeof(q));
}
