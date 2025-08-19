// A B and C are three towers.
// A has 1 on 2 on 3 on ... on N in that order.
// Given a sequence of move like
// A B
// B A
// B C
// Detect if it is legal. If yes, then print the stacks A B and C after the moves.
#include <stdio.h>
#include <string.h>
#define equals(X,Y) (strcmp(X,Y)==0)
int main(){
	int aTop=1, bTop=0, cTop=0;
	int aMid=2, bMid=0, cMid=0;
	int aBot=3, bBot=0, cBot=0;

	while ( cTop!=1 || cMid != 2 || cBot !=3 ){
		printf("%3d %3d %3d\n",aTop,bTop,cTop);
		printf("%3d %3d %3d\n",aMid,bMid,cMid);
		printf("%3d %3d %3d\n",aBot,bBot,cBot);
	
		char f[10],t[10];
		int i=0;
		printf("> from ? to ? :");
		scanf("%s %s",f,t);
		if (equals(f,"A") ) {
			// pick up from the f stick
			if (aTop!=0) { i=aTop; aTop=0;	}
			else if (aMid != 0 ) { i=aMid; aMid=0;}
			else if (aBot != 0 ) { i=aBot; aBot=0;}
			else { i=0; printf("Bad move, STOPPED***\n"); return 1; }

			//place on the appropriate t  stick
			if (i!=0 &&   // if you found a disk, check destination size and move
			    equals(t,"B")) {
				if (bBot==0) { bBot=i; 	}
				else if (bMid == 0 && bBot > i) { bMid=i;}
				else if (bTop == 0 && bMid > i) { bTop=i;}
				else { printf("Bad move, STOPPED***\n");  return 1;}
			} else if(i!=0 &&
			    equals(t,"C")) {
				if (cBot==0) { cBot=i; 	}
				else if (cMid == 0 && cBot > i) { cMid=i;}
				else if (cTop == 0 && cMid > i) { cTop=i;}
				else { printf("Bad move, STOPPED***\n");  return 1;}
			}
		}
		if (equals(f,"B") ) {
			if (bTop!=0) { i=bTop; bTop=0;	}
			else if (bMid != 0 ) { i=bMid; bMid=0;}
			else if (bBot != 0 ) { i=bBot; bBot=0;}
			else { i=0; printf("Bad move, STOPPED***\n"); return 1; }

			//place on the appropriate t  stick
			if (i!=0 &&   // if you found a disk, check destination size and move
			    equals(t,"A")) {
				if (aBot==0) { aBot=i; 	}
				else if (aMid == 0 && aBot > i) { aMid=i;}
				else if (aTop == 0 && aMid > i) { aTop=i;}
				else { printf("Bad move, STOPPED***\n");  return 1;}
			} else if(i!=0 &&
			    equals(t,"C")) {
				if (cBot==0) { cBot=i; 	}
				else if (cMid == 0 && cBot > i) { cMid=i;}
				else if (cTop == 0 && cMid > i) { cTop=i;}
				else { printf("Bad move, STOPPED***\n");  return 1;}
			}
		}
		if (equals(f,"C") ) {
			if (cTop!=0) { i=cTop; cTop=0;	}
			else if (cMid != 0 ) { i=cMid; cMid=0;}
			else if (cBot != 0 ) { i=cBot; cBot=0;}
			else { i=0; printf("Bad move, STOPPED***\n"); return 1; }

			//place on the appropriate t  stick
			if (i!=0 &&   // if you found a disk, check destination size and move
			    equals(t,"A")) {
				if (aBot==0) { aBot=i; 	}
				else if (aMid == 0 && aBot > i) { aMid=i;}
				else if (aTop == 0 && aMid > i) { aTop=i;}
				else { printf("Bad move, STOPPED***\n");  return 1;}
			} else if(i!=0 &&
			    equals(t,"B")) {
				if (bBot==0) { bBot=i; 	}
				else if (bMid == 0 && bBot > i) { bMid=i;}
				else if (bTop == 0 && bMid > i) { bTop=i;}
				else { printf("Bad move, STOPPED***\n");  return 1;}
			}
		}
	}
	printf("Done!\n");

}


