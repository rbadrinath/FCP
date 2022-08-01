#include <stdio.h>

void merge(int * a, int left, int p, int right){
	int l, r, i;
	int left_array[100], right_array[100];
	// copy a[left] to a[p] into left_array[]
	for( i=left, l=0;   i<=p;   i++){
		left_array[l++]=a[i];
	}
	int ln=l;
	// copy a[p+1] to a[right] into right_array[]
	for( i=p+1, r=0;   i<=right;   i++){
		right_array[r++]=a[i];
	}
	int rn=r;
	// now copy the elemens in sorted order back to a
	l=r=0;
	for( i=left; i <= right; i++ ){
		if (l == ln ) // copy from r
			a[i]=right_array[r++];
		else if (r == rn ) // copy form l
			a[i]=left_array[l++];
		else // now copy depending on comparision
			if (left_array[l] <= right_array[r])
				a[i]=left_array[l++];
			else
				a[i]=right_array[r++];

	}
}

void merge_sort(int * a, const int left, const int right){
	// if right-left < 1 then nothing to sort
	if ( right-left < 1 )
		return ;
	int p=(right+left)/2;
	merge_sort(a, left, p); // small change
	merge_sort(a, p+1, right);
	// now merge the left sorted arrand and the right sorted array
	merge(a,left,p,right);
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
	merge_sort(a,0,n-1);

	// print the sorted array
	for (i=0; i < n; i++)
		printf("%d ",a[i]);


}
