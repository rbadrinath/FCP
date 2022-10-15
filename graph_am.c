#include <stdio.h>

// 1. reading a graph
void read_graph(int a[][5], int n){
	FILE * fp=fopen("graph_info","r");
	for(int i=0; i<n;i++)
	  for(int j=0; j<n; j++)
		  fscanf(fp,"%d ",&a[i][j]);
}

// 2. printing a graph
void print_graph(int a[][5], int n){
	for(int i=0; i<n;i++) {
	  for(int j=0; j<n; j++)
		  printf("%d ",a[i][j]);
	  printf("\n");
	}
}
void main(){
	int adj_mat[5][5];
	int n1,n2;

	read_graph(adj_mat,5);
	print_graph(adj_mat,5);

	// 3. Simple test of adjacency
	printf("\n Give me two nodes to check adjacency: ");
	scanf("%d %d", &n1,&n2);
	if ( adj_mat[n1][n2] == 1 )
		printf("Yes\n");
	else 
		printf("No\n");


	// 4. Checking if a path is valid
	// - read in the path into "path[]"
	printf("\n Give me  a path(length<=10) to check : (end with -1) ");
	int path[10];
	int i=0,n=-1;
	scanf("%d",&n);
	while( n != -1 ) {
		path[i++]=n;
	        scanf("%d",&n);
	}
	int l=i-1; // l is index of last node 

	// - check if each node is adjacent to the next one
	for(i=0;i < l; i++ ) { 
		n1=path[i];
		n2=path[i+1];
		if( adj_mat[n1][n2] == 0 ) {
			printf("%d and %d are not adjacent, broken path\n",
				       	n1,n2);
			break;  // We found non-adjacent neighbours in path
		}
	}
	if (i == l )
		printf("Your path is good!\n");
}
