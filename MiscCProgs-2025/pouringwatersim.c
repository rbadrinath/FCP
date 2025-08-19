// Simulate the scenario
// You want to demostrate measure out 5 L
// You have a 7 L and 4 L  can filled with water
// Modeling :
//  ** two jars named 1 and 2 (Fixed)
//  ** each has howmuch water it holds at any point in time - cal these w1 and w2
//  ** Each jar has a capacity call them c1 and c2 (read in)
//  ** Target amount (read in - this is the amount to measure out exactly)
//  ** current amount measured out already - call this measured
// Operations possible
// F 1/2    Fill up Jar 1 or Jar 2 from the tap
// E 1/2    Empty out Jar 1 or 2
// M 1/2    Measure out Jar 1 or 2 (ie entire contents of that jar)
// P 1 2    Pour from Jar 1 to Jar 2 until Jar 1 empties or Jar 2 fills which ever is earlier
// similarly P 2 1
#include <stdio.h>
#include <string.h>

#define equals(X,Y) (strcmp(X,Y)==0)
#define min(X,Y) (X<Y?X:Y)
int main() {
	int c1, c2;
	printf("Enter the capacities of the two jars:");
	scanf("%d %d",&c1,&c2);

	int target;
	printf("Enter the target amount to measure out:");
	scanf("%d",&target);

	// Initial state of the world
	int w1=0, w2=0;
	int measured=0;

	while(measured < target){

		printf("j1:%2d  j2:%2d   measured:%2d   target %2d\n",w1,w2, measured, target);



		char operation[10];
		printf("Operation F E M P:");
		scanf("%s",operation);
		if (equals(operation,"F")){
			int jar;
			scanf("%d",&jar);
			if (jar==1) w1=c1;
			else if (jar == 2 ) w2=c2;
		}
		if (equals(operation,"E")){
			int jar;
			scanf("%d",&jar);
			if (jar==1) w1=0;
			else if (jar == 2 ) w2=0;
		}
		if (equals(operation,"M")){
			int jar;
			scanf("%d",&jar);
			if (jar==1) {measured+=w1; w1=0;}
			else if (jar == 2 ) {measured +=w2; w2=0;}
		}
		if (equals(operation,"P")){			// Idea is 
			int jar1,jar2;
			scanf("%d %d",&jar1, &jar2);
			if (jar1==1 && jar2==2) {
				// remaining space in jar2 is 
				int r2=c2-w2;
				// amount you can pour is 
				int pourable=min(r2,w1);
				// now pour it
				w1-=pourable;
				w2+=pourable;
			}
			if (jar1==2 && jar2==1) {
				// remaining space in jar1 is 
				int r1=c1-w1;
				// amount you can pour is 
				int pourable=min(r1,w2);
				// now pour it
				w1-=pourable;
				w2+=pourable;
			}
		}

	}
	printf("j1:%2d  j2:%2d   measured:%2d   target %2d   is the final status.\n",w1,w2, measured, target);
	if (measured == target)
		printf("Done!\n");
	else 
		printf("Sorry that is too much\n");

}


