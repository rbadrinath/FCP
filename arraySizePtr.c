#include <stdio.h>

void main(){
	int a[40];
	int *p[40];
	int (*q)[40];
	// usage
	p[0]=a;
	q=a;
	printf("p, p+1, diff = %p %p %d\n",p,p+1,(int)(p+1) - (int) p);
	printf("q, q+1, diff = %p %p %d\n",q,q+1,(int)(q+1) - (int) q);
	printf("sizeof(a) sizeof(p) sizeof(q) %lu  %lu %lu\n",sizeof(a), sizeof(p),sizeof(q));
}
