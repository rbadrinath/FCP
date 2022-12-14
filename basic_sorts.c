#include <stdio.h>
#include "timeutil.h"
#define DATA_MAX 10000
#define DATA_FILE "/tmp/sorting_data"

// A few utility functions that are used to make the program easy to read:

// A function to read input into an array
// Returns the number of items read
int read_array(int a[]){
	// Prompt and read in the numbers one by one
	int n;
	printf("Howmany numbers? ");
	scanf("%d",&n);
	printf("Give the %d numbers : ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	return n;
}
int read_array_file(int a[], const char * filename){
	// Prompt and read in the numbers one by one
	FILE * fp;
	fp = fopen(filename,"r");
	int n;
	fscanf(fp,"%d",&n);
	for(int i=0;i<n;i++)
		fscanf(fp,"%d",&a[i]);
	return n;
}

// A function to print out the items in an array
void print_array(int a[], int n){
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

// A function o swap elements in two given index positions in an array
void swap (int a[], int i, int j){
	int t = a[i];
	a[i]=a[j];
	a[j]=t;
}
// ----------------------------------------------------------------

// BUBBLE SORT ALGORITHM
// a[] is an array and we wish to sort the region a[left]...a[right]
// The core idea is to scan from left to right and find the biggest
// element and put it in the right most position "right"
// Then find the next biggest and put it in the position "right-1"
// and so forth...
void bubblesort(int a[], int left, int right){
	int lim,j;
	long l;
	// lim is right most position initially
	// lim is left+1 finally
	for (lim=right; lim>left; lim--){ 
		for ( j=left ; j < lim ; j++ ) {
			// compare a[j] and a[j+1] and swap if out of order
			if (a[j] > a[j+1] )
				swap(a,j,j+1);
		}
	}
}

// A simplified version
void bubblesort_simple(int a[], int n){
	int lim,j;
	long l;
	// lim is right most position initially
	for (lim=n-1; lim>0; lim--){ 
		for ( j=0 ; j < lim ; j++ ) {
			// compare a[j] and a[j+1] and swap if out of order
			if (a[j] > a[j+1] )
				swap(a,j,j+1);
		}
	}
}
// --------------------------------------------------


// INSERTION SORT ALGORITHM
// a[] is an array and we wish to sort a[left].. a[right]
// The idea of this sort is to repeatedly insert a new element into
// a sorted array, 
// starting with a[left]...a[left] which is a 1 length sorted array.. 
// The loop assumes a[left]...a[i] is sorted
// and tries to insert a[i+1], so of course some elements need to shift.
void insertionsort(int a[], int left, int right){
	// prototype of a function to insert we define later:
	void insert(int a[], int lft, int rt, int val);
	int i;
	for (i=left; i <right; i++){
		int v = a[i+1];
		insert(a,left,i,v);
	}
}

//
// Now we write the insert() function:
// This assumes the given array has all elements in
// a[left] to a[right] already in increasing sorted order.
// So a[left] <= a[left+1] <= ... <= a[right]
// The aim is to insert the new value val 
// It assumes a[right+1] is free so enough space to add the new value 
// into the array a[] between index left and index right
// If it is bigger than a[right] insert into index position right+1
// It does not touch anything before left and anything after right+1
void insert(int a[], int left, int right, int val){
	int i=right;
	// Move all elements one location further if they are bigger than val
	// For ease start at the index right
	while( i >=left && a[i] > val) {
		a[i+1]=a[i];
		i--;
	}
	a[i+1]=val;
}

// Here is another form of insertion sort which useful (only)
// if the intention is to make a sorted array while reading it in
int insert_while_reading(int a[]){
	int i,n;
	printf("Howmany numbers? ");
	scanf("%d",&n);
	printf("Give the %d numbers : ",n);
	for(i=0;i<n;i++){
		int v;
		scanf("%d",&v);
		insert(a,0,i-1,v);
	}
	return n;

}

// A simplified version.Maybe you want to understand this first?
void insertionsort_simple(int a[], int n){
	for(int r=1;r<n;r++) {
		// 0..r-1 is assumed sorted
		// we just find the right place for a[r]
		int t = a[r];
		int j;
		for(j=r-1; j>=0; j--) {
			if(a[j] > t)
				a[j+1]=a[j];
			else
				break;
		}
		a[j+1]=t;
	}
}
// ------------------------------------------------------------------

// SELECTION SORT ALGORITHM
//
// Here is a simple funciton to find the index of the minimum
// item in the range a[left]..a[right]
//
int find_index_min(int a[], int left, int right){
	int index_min=left;
	for(int i=left+1; i<=right; i++)
		if (a[i]< a[index_min])
			index_min=i;
	return index_min;
}

// Selection sort works on using the above.
// It selects the  minimum of a[left]..a[right]   and puts it into a[left]
// It then selects minimum of a[left+1]..a[right] and puts it into a[left+1]
// and so forth
void selectionsort(int a[], int left, int right){
	int i; 
	for (i=left; i < right; i++){
		int index_min=find_index_min(a,i,right);
		swap(a,index_min,i);
	}
}


// A simplified version.Maybe you want to understand this first?
void selectionsort_simple(int a[], int n){
	int i;
	for(i=0; i < n;i++){
		int min_pos=i;
		for(int j=i+1;j<n;j++)
			if (a[min_pos] > a[j])
				min_pos=j;
		int t = a[min_pos];
		a[min_pos]=a[i];
		a[i]=t;
	}
}
// --------------------------------------------------------------------------


// main() function is pretty much the same whichever sorting method is called
int main(int argc, char * argv[]){
	// n is number of items to read in to sort
	// a is the array to store the numbers read in
	int n, a[DATA_MAX];
	n = read_array_file(a,DATA_FILE);
	//n = read_array(a);
	if ( n <=100 )
		print_array(a,n);
	
	// Sort the numbers in the array positions a[0]..a[n-1]
	// selectionsort(a,0,n-1);
	// selectionsort_simple(a,n);
	// insertionsort(a,0,n-1);
	// insertionsort_simple(a,n);
	// bubblesort(a,0,n-1);
	bubblesort_simple(a,n);
	// n=insert_while_reading(a);


	// print the sorted array
	print_array(a,n);
}
