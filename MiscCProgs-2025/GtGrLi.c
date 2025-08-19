// Simulate the goat grass lion problem
/*
Initially everything is on the left bank
Check if a set of moves are valid.
Generate a random set of moves and check if it is vallid.

 * Idea to model the two banks contents:
 * Implementation: Left bank is represented by array is a three long 0 1 array indicating absense or presence of 
 * index 0 goat (T)
 * index 1 grass (S)
 * index 1 lion (N)
 * Similarly right bank array
Modeling the moves:
E L  (move empty handed to the left bank (from right bank))
E R
T L  (Goat move from right to left bank)
T R
S L  (Grass move from right to left bank)
S R
N L (Lion move from right to left bank)
N R
Implementation: remove from left bank array and add to right bank array, for example.
leftbank[S]=0 and rightbank[S}=1


*/
#include <stdio.h>
#include <stdlib.h>
#define T 0
#define S 1
#define N 2

#define Gt 0
#define Gr 1
#define Li 2

#define N_ITEMS 3
#define  LEFT_BANK 0
#define RIGHT_BANK 1

char * item_to_string(int item){
	if( item == 0 )
		return "Gt";
	if( item == 1 ) 
		return "Gr";
	if( item == 2 )
		return "Li";
	return "**";
}
int all_items_on(int bank, int bank_contents[][N_ITEMS]){
	// check if all items or on the given bank
	int i;
	for(i=0;i<N_ITEMS;i++)
		if ( bank_contents[bank][i]==0  ) return 0;
	return 1;
}
int safe_bank(int bank_contents[][N_ITEMS], int bank, int chosen_item)  {
	// see if bank is safe after removing the chosen item (ie the bank is left with the remaining items)
	int safe=1; // safe untill proven otherwise

	// temporarily remove chosen_item to 1 in the bank_contents
	if (chosen_item != -1)
		bank_contents[bank][chosen_item]=0;

	if( bank_contents[bank][N] && bank_contents[bank][T]   ||   bank_contents[bank][T] && bank_contents[bank][S])
	      safe=0;	
	// revert seting of chosen_item to 1 in the bank_contents
	if (chosen_item != -1)
		bank_contents[bank][chosen_item]=1;
	return safe;
}
int main(){
	//Model of the two banks
	int bank_contents[2][N_ITEMS];
	bank_contents[LEFT_BANK][T]=bank_contents[LEFT_BANK][S]=bank_contents[LEFT_BANK][N]=1; 
	bank_contents[RIGHT_BANK][T]=bank_contents[RIGHT_BANK][S]=bank_contents[RIGHT_BANK][N]=0; 
	int current_bank=LEFT_BANK;
	int max_tries=100;
	int nSteps=0;
	int seed;
	printf("Random seed please: ");
	scanf("%d",&seed);
	srandom(seed);
	while(! all_items_on(RIGHT_BANK,bank_contents)  && max_tries) {

		int max_rand_choices=20;
		// randomly choose an item on current bank
		do {
			int chosen_item=random()%4;  // chose one of three items to remove from the current_bank 
						     // note 0,1,2 are items 3 is empty_handed move
			if ( chosen_item < 3 && bank_contents[current_bank][chosen_item] == 1 
				&& safe_bank(bank_contents, current_bank, chosen_item) ) {
			   bank_contents[current_bank][chosen_item]=0;
			   bank_contents[1-current_bank][chosen_item]=1;
			   printf("%3d: From %d move %s\n", nSteps, current_bank, item_to_string(chosen_item));
			   current_bank=1-current_bank;
			   break;
			} else {
				if ( safe_bank(bank_contents, current_bank, -1) ) {
					printf("%3d: From %d move Emptyhanded\n",nSteps, current_bank);
					current_bank=1-current_bank;
					break;
				}
			}
			max_rand_choices--;
		}while (max_rand_choices);
		max_tries--;
		nSteps++;
	}
	if (all_items_on(RIGHT_BANK,bank_contents) )
		printf("Done! %d steps\n",nSteps);
	else
		printf("Failed*** %d steps\n",nSteps);
	// Every item is on the left bank only
}
