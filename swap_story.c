#include <stdio.h>
void bubble_sort(int a[], int n);
void insert_sort(int a[], int n);
void select_sort(int a[], int n);

// Look at these functions one by one
//
// 1. Simple swap of any two indices
//    calling it with swap(a,i,i+1) would swap a[i] with a[i+1]
void swap(int a[], int i, int j){
	int t = a[i];
	a[i]=a[j];
	a[j]=t;
}

// 2. Modified swap of successive indices, but do it only if a[i] > a[i+1]
void swap_greaterup(int a[], int i){
	if (a[i] > a[i+1] )
		swap(a,i,i+1);
}

// 3. Repeatedly do the modified swap above for each valid value of i
void repeat_swap_greaterup(int a[], int n){
	for(int i=0;i<n-1;i++)
		swap_greaterup(a,i);
}

// 4. This just prints the whole array
void print_array(int a[], int n) {
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

// 5. Insert into the appropriate position in an array
//    a[] already has n integers and we are inserting a new one
void insert_ordered(int a[], int n, int val){
	// find the i where to insert
	int i;
	for(i=0;i<n;i++)
		if ( a[i] > val )
			break;
	// from position i move everything up one space
	// But do it in reverse order!
	for(int j=n-1;j>=i;j--)
		a[j+1]=a[j];

	// insert the new value
	a[i]=val;
}

// 6. Return the largest element in an array
int position_largest(int a[], int n){
	int i=0;
	int largest_pos=0;
	int largest_val=a[0];
	for(i=1; i<n ; i++)
		if(a[i]>largest_val) {
			largest_val=a[i], largest_pos=i;
		}
	return largest_pos;
}


void main(){
	int a[]={5,3,2,8,6,9,1,0};
	int n = sizeof(a)/sizeof(int);

	printf("%d\n",n);
	print_array(a,n); // print the input

	// Swap greated up the array
	// repeat_swap_greaterup(a,n); // do the repeated swap

	/*
	// insert from array a[] into array b[]
	int m=0;
	insert_ordered(b,m,a[i]); m++;
	print_array(b,m); // print he array b[]

	// find greatest in array a[] and put it at the end
	//
	int l ;
	l = position_largest(a,n);
	swap(a,n-1,l);	// put largest in the end, but keep all the elements
	*/

	select_sort(a,n);

	print_array(a,n); // print the result modified array
}





void bubble_sort(int a[], int n){
	printf("%d\n",n);
	for(int i=0; i < n-1 ; i++)
	    repeat_swap_greaterup(a,n); // do the repeated swap: (n-i, maybe?)
}

void insert_sort(int a[], int n){
	int b[20];
	int m=0;
	for( int i=0; i<n; i++)
		insert_ordered(b,m++,a[i]);
	print_array(b,m); // print he array b[]
}

void select_sort(int a[], int n){
	int l ;
	for(int i=n; i>0;i--) {
		l = position_largest(a,i);
		swap(a,i-1,l);	// put largest in the end, but keep all the elements
	}
}

