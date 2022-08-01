#include <stdio.h>

void make_pivot_the_first(int a[], const int left, const int right){
	// lets assume the first element (leftmost) is the pivot. So no work.
	return ;
}

/*  Pivot using extra space :- */
int pivot_the_array(int a[], const int left, const int right){

	// temporary arrays to store smaller= and larger elements
	int left_array[100], right_array[100];
	// l and r are indices to left_array[] and right_array[]
	// i is index to a[]
	int l,r,i;

	// OK this call does nothing
	// make_pivot_the_first(a,left,right);
	// assumes pivot value is a[left]
	int pv=a[left];

	// Since we are sorting in increasing order...
	// Move all items from a[] to left_array[] if item is <= pv except pv ie a[left]
	//                   and   to right_array[] if item is > pv
	for(l=0, r=0, i=left+1 ; i<=right ; i++ ){
	   if (         ) // if i-th element is less than or equal to pv move it to the left_array
		   left_array...
	   else           // if i-th element is greater than pv move it to the right_array
		   right_array...
	}

	// Now there are l elements in the left_array and r elements in the right_array
	// First move all items from left_array to a
	for(i=0 ; i  < l ; i++){
		a[....]=left_array[...];
	}
	// move pv to the next position ie ...
	a[ ]=pv;
	int pivot_pos=left+l;

	l++;
	// Next move all items from right_array to a
	//      after pv in a 
	for(i=0 ; i  < r ; i++){
		a[...]=right_array[...];
	}

	// we always return the last point of the lesser-than-equals elements
	return pivot_pos ;
}

void quicksort(int * a, const int left, const int right){
	// if 1 or fewer elements between left and right, then nothing to do
	if ( right-left < 1 )
		return ;
	// Else
	// partition the array around a pivot value .. this will cause elements to move around
	// But the item at index p is ins right place and there is no need to move that!
	int p=pivot_the_array(a,left,right); // p is the pivot value's index in a. a[p] has found its home!
	quicksort(a, left, p-1);  // now sort the part that has values smaller than or equal to the pivot value
	quicksort(a, p+1, right); // next sort the part that has values greater than the pivot value
}

int main(){
	// i is an iteration variable
	// n is number of items to read in to sort
	int i,n;
	// a is the array to store the numbers read in
	int a[100];

	// Prompt and read in the numbers one by one
	printf("n=?");
	scanf("%d",&n);
	for (i=0; i < n; i++)
		scanf("%d",&a[i]);
	printf("\n");

	// Sort the numbers in the array positions 0..n-1
	quicksort(a,0,n-1);

	// print the sorted array
	for (i=0; i < n; i++)
		printf("%d ",a[i]);

}
