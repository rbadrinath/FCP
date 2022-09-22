#include <stdio.h>
// This is about arrays pointers and functions
void f1( int x ){
	x = 55;
}

void f2( int *p ){
	*p = 55;
}

void f3( int *p ){
	int i;
	for(i=0;i<10;i++)
		*(p+i)=i+55; // alernately p[i]=i+55 ;
}

void f4( int *p , int n){
	int i;
	for(i=0;i<n;i++)
		p[i]=i+5;
}

void main(){
	int x=0;
	f1(x);
	printf("%d\n",x);  // prints 0

	f2(&x);
	printf("%d\n",x); // prints 55

	int a[10]={0,1};
	int i;
	f2(a);
	printf("%d\n",a[0]); // prints 55

	f3(a);
	for ( int i=0; i < 10; i++)
		printf("%d ",a[i]); // changes all 10 elements of the array
	printf("\n");
	
	f4(a,5);
	for ( int i=0; i < 10; i++)
		printf("%d ",a[i]); // changes the first 5 elements only
	printf("\n");
}
