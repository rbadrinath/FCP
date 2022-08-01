#include <stdio.h>

int search( int a[], int left, int right, int q){
	int i;
	for( i=left; i <= right ; i++ ){
		if ( a[i] == q )
			return i;
	}
	return -1;
}

int bsearch( int a[], int left, int right, int q){
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
		r = bsearch(a, left, m, q);
	else
		r = bsearch(a, m+1, right, q);
	return r;
}

int main(){
	// i is an iteration variable
	// n is number of items to read in
	int i,n,q;
	// a is the array to store the numbers read in
	int a[100];

	// Ask what to search for
	printf("q=?");
	scanf("%d",&q);

	// Prompt and read in the numbers one by one
	printf("n=?");
	scanf("%d",&n);
	for (i=0; i < n; i++)
		scanf("%d",&a[i]);
	printf("\n");

	// search for the number in the array
	int idx = bsearch(a,0,n-1,q);

	// print the sorted array
	printf("Found the element at index %d\n",idx);


}
