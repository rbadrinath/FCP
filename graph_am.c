#include <stdio.h>
void main(){
	int adj_mat[4][4] = { { 0, 1, 1, 1}, 
			      { 1, 0, 0, 1},
			      { 1, 0, 0, 1},
			      { 1, 1, 1, 0}} ;

	int n1,n2;
	printf("\n Give me two nodes to check adjacency: ");
	scanf("%d %d", &n1,&n2);
	if ( adj_mat[n1][n2] == 1 )
		printf("Yes\n");
	else 
		printf("No\n");



	printf("\n Give me  a path to check : (end with -1) ");
	int path[10];
	int i=0,n=-1;
	scanf("%d",&n);
	while( n != -1 ) {
		path[i++]=n;
	        scanf("%d",&n);
	}
	i--;
	while(i > 0 ) {
		if( adj_mat[path[i]][path[i-1]] == 0 ) {
			printf("%d and %d are not adjacent, broken path\n", path[i],path[i-1]);
			break;
		}
		i--;
	}
	if (i == 0 )
		printf("Your path is good!\n");
}



