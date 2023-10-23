#include <stdio.h>
void main(){
	int i;
	int a[100]={0,1,2,3,4,5,6,7,8,9};
	char b[100]={'a','b','c','d','e','f','g','h','i','j'};

	// what is an array address: These two should be the same:
	printf("just array name a: %p \n",a);
	printf("address of   a[0]: %p \n",&a[0]);

	// normal array indexing
	printf("Normal array indexing:\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");

	// equivalent with pointer arithmetic
	printf("Using pointer arithmetic:\n");
	for(i=0;i<10;i++)
		printf("%d ",*(a+i));  // see the usage here
	printf("\n");

	// pointers and arrays
	int * pa = a;
	printf("using a pointer to a:\n");
	for(i=0;i<10;i++)
		printf("%d ",pa[i]);  // we could replace this by pointer arithmetic
	printf("\n");

	// more pointer arithmetic
	pa = & a[5];
	printf("using a pointer to &a[5]:\n");
	for(i=-5;i<5;i++)
		printf("%d ",pa[i]);  // we could replace this by pointer arithmetic
	printf("\n");

	printf("+1 on int  array: %p %p\n",a+0,a+1);
	printf("+1 on char array: %p %p\n",b+0,b+1);
	printf("diff between &a[5] and a %d\n",(int) (&a[5]-a));  // can replace &a[5]  by pa

	// increment and decrement operators:
	printf("using increment and decrement operators on pointers to b:\n");
	char *pb1 = &b[4];
	char *pb2 = &b[5];
	for(i=0;i<5;i++,pb1--,pb2++)
		printf("%c %c\n",*pb1,*pb2);
	

}
