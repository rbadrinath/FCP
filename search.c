#include <stdio.h>

int linear_search( int a[], int left, int right, int q){
	int i;
	for( i=left; i <= right ; i++ ){
		if ( a[i] == q )
			return i;
	}
	return -1;
}

int binary_search( int a[], int left, int right, int q){
	int m;
	int r;
	// Base case is if there is only one element
	if (left==right)
		if (a[left]==q)
			return left;
		else 
			return -1;

	// non base case, will have recursion
	m = (left+right)/2;
	// find how the query key compares with the middle item 
	// depending on that recurse on one of the sides only
	if ( q <= a[m])
		r = binary_search(a, left, m, q);
	else
		r = binary_search(a, m+1, right, q);
	return r;
}

int main(){
	// i is an iteration variable
	// n is number of items to read in
	int i,n,q;
	// a is the array to store the numbers read in
	int a[100];

	// Prompt and read in the numbers one by one
	printf("Howmany numbers (n)? ");

	scanf("%d",&n);
	printf("Enter the %d numbers( a[] ) :",n);
	for (i=0; i < n; i++)
		scanf("%d",&a[i]);
	printf("\n");

	// Ask what to search for, ie the query value/ search key
	printf("What is the search key (q)? ");
	scanf("%d",&q);

	// search for the number in the array
	
	int idx;
	// First using the linear search method
	idx = linear_search(a,0,n-1,q);
	printf("Found the element at index %d\n",idx);
	
	// Second using the binary search method
	idx = binary_search(a,0,n-1,q);
	printf("Found the element at index %d\n",idx);


}
