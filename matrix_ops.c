#include <stdio.h>
/* 
// Define maximum columns for a row and the maximum ni of rows
#define MAXC 5
#define MAXR 6
*/

void swap(int a[][5],int i, int j){
   int t;
   for(int k=0;k<5;k++)
	   t=a[i][k], a[i][k]=a[j][k], a[j][k]=t;
}

void print_matrix(int a[][5], int nr, int nc){
	for(int i=0;i<nr;i++) {
	  for(int j=0;j<nc;j++) 
		  printf("%d ",a[i][j]);
	  printf("\n");
	}
}

void main(){
	int a[6][5]= { {11,12,13,14,15}, {21,22,23,24,25},
	               {31,32,33,34,35}, {41,42,43,44,45},
	               {51,52,53,54,55}
	             };

	printf(" Original matrix:\n");
	print_matrix(a,5,5);
	printf("\n\n After swapping two rows:\n");
	swap(a,1,4);
	print_matrix(a,5,5);

}
