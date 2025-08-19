// simulate the moves of the 15 puzzle on a 4x4 grid.
// Give points for number of moves.
// How to generate an initial position?
//

#include <stdio.h>
#include <stdlib.h>

// we have three globals - not a good idea, however
int zi,zj;
int square[4][4];


// Initializes a 4x4 square as a solved square with bottom right being the empty square represented by zero
int initialize(int square[][4]){
	for(int i=0;i<15;i++)
		square[i/4][i%4]=i+1;
	square[3][3]=0;
	zi=zj=3;
}

// Check if a 4x4 square is indentical to the square as initilized above.
// return 1 if solved, 0 if not
int checkIfSolved(int square[][4]){
	for(int i=0;i<15;i++)
		if(square[i/4][i%4]!=i+1)
			return 0;
	return 1;
}

// swap the contents of (i1,j1) wiht (i2,j2)
void swap(int square[][4], int i1, int j1, int i2, int j2){
	int t = square[i1][j1];
	square[i1][j1]=square[i2][j2];
	square[i2][j2]=t;
}

// randomly pick two square positions and interchange their content
void randomize(int square[][4]){
	// Idea:
	// find a random (i,j) each in 0..3
	// find another random (i,j) each in 0..3  
	// make sure they are different
	// swap their contents
	int i1, j1, i2, j2;
	i1=random()%4;
	j1=random()%4;
	i2=random()%4;
	j2=random()%4;
	swap(square,i1,j1,i2,j2);
	printf("Swapped (%d,%d), with (%d,%d)\n",i1,j1,i2,j2);
	if (i1==zi && j1==zj) {
		zi=i2; zj=j2;
	} else if (i2==zi && j2==zj) {
		zi=i1; zj=j1;
	}
}

// print the contents of a square
void print(int square[][4]){
	for(int i=0;i<4;i++) {
	   for(int j=0;j<4;j++)
		printf(" %3d",square[i][j]);
	   printf("\n");
	}
}

// Take input from user in terms of up/down/left/right and move the piece appropriately
int solve(int square[][4]){
	// ask for a move and do it
	char dir;
	printf("> ");
	scanf(" %c", &dir);
	int i=zi;
	int j=zj;
	if (dir=='u' || dir=='u') {
		if(i>0) zi-=1;
	} else if (dir=='d' || dir=='D') {
		if(i<3) zi+=1;
	} else if (dir=='r' || dir=='R') {
		if(j<3) zj+=1;
	} else if (dir=='l' || dir=='L'){
		if(j>0) zj-=1;
	} else {
		printf("Bad input\n");
		return 0;
	}
	swap(square,i,j,zi,zj);
	return checkIfSolved(square);
}

int main(){
	int square[4][4];
	srand(20);

	initialize(square);
	print(square);

	int k;
	printf("Howmany randomize steps: ");
	scanf("%d",&k);

	for(int i=0;i<k;i++)
		randomize(square);
	print(square);

	int done=0;
	int ntries=0;

	done=checkIfSolved(square);
	while (!done ) {
		done = solve(square);
		ntries++;
		print(square);
	}
	printf("It is indeed solved\n");

}
