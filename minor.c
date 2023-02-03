#include <stdio.h>
#define LENGTH 5

// When declaring as a parameter a 2-D Matrix, 
//         you need to mention the second dimension,  No escaping!!
//         something like read_matrix( int a[][] ) **will not** work!
//
// Mentioning the first dimension's length alone is optional
// Dimensions are understood a[<first>]...[<last>] 
//          So a 3-D Matrix as a parameter may be a[][SIZE1][SIZE2]
void read_matrix( int a[][]){
//     assumes a is LENGTH x LENGTH
	for(int i=0;i<LENGTH;i++)
	   for(int j=0;j<LENGTH;j++)
		   scanf("%d",&a[i][j]);
}

// Here is another example
// Since in a parameter he first dimension is optional
//      "void print_matrix( int a[LENGTH][LENGTH], int n)" is valid
// Since  in a parameter int a[] is same as int * a
//      "void print_matrix( int (*a)[LENGTH], int n)" is valid
//    
//     assumes a at most is LENGTH x LENGTH
void print_matrix( int a[][LENGTH], int n){
	for(int i=0;i<n;i++) {
	   for(int j=0;j<n;j++)
		   printf("%d ",a[i][j]);
	   printf("\n");
	}
}

// Copy n elements of a simple array a to b
void cp(int a[], int n, int c[]){
	int i;
	for(i=0;i<n;i++)
		c[i]=a[i];
}

// Copy nxn square matrix in a to c
//     assumes they are nxn  and n <=LENGTH
void copy(int a[][LENGTH], int n, int c[][LENGTH]){
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			c[i][j]=a[i][j];
}

// Eliminates the r-th row and the c-th column
//     and stores the result in the matrix m
//     assumes a is LENGTH x LENGTH
void minor(int a[][LENGTH], int r, int c, int m[][LENGTH]){
	// i and j are indices to a[]
	// im and rm are indices to m[]
	int i,j,im,jm;

	for(i=im=0;i<LENGTH;i++,im++) {
		if(i==r) im--;
		else {
			for(j=jm=0;j<LENGTH;j++,jm++) {
				if(j==c) jm--;
				else
					m[im][jm]=a[i][j];
			}

		}
	}
}

void main(){
	int a[LENGTH][LENGTH]=
		    { 0, 1, 2, 3, 4,
		     10,11,12,13,14,
		     21,21,22,23,24,
		     31,31,32,33,34,
		     41,41,42,43,44};
	int m[LENGTH][LENGTH];

	int mi;
	int mj;

	print_matrix(a,LENGTH);	// NB: Just like 1-D arrays, 
				// we just use the name of the array to pass it.

	printf("mi mj : ");
	scanf("%d %d",&mi,&mj);
	minor(a,mi,mj,m);
	print_matrix(m,LENGTH-1);
}
