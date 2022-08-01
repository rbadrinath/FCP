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
	make_pivot_the_first(a,left,right);
	// assumes pivot value is a[left]
	int pv=a[left];

	// Since we are sorting in increasing order...
	// Move all items from a[] to left_array[] if item is <= pv except pv ie a[left]
	//                   and   to right_array[] if item is > pv
	for(l=0, r=0, i=left+1 ; i<=right ; i++ ){
	   if (a[i]<=pv )
		   left_array[l++]=a[i];
	   else
		   right_array[r++]=a[i];
	}

	// Now there are l elements in the first and r elements in the second
	// First move all items from left_array to a
	for(i=0 ; i  < l ; i++){
		a[left+i]=left_array[i];
	}

	a[left+l]=pv;
	int pivot_pos=left+l;

	l++;
	// Second move all items from right_array to a
	//      but start from position "l"
	for(i=0 ; i  < r ; i++){
		a[left+l+i]=right_array[i];
	}

	// we always return the last point of the lesser-than-equals elements
	return pivot_pos ;
}

void quicksort(int * a, const int left, const int right){
	// if right-left < 1 then nothing to sort
	if ( right-left < 1 )
		return ;
	int p=pivot_the_array(a,left,right);
	quicksort(a, left, p-1);
	quicksort(a, p+1, right);
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
