#include <stdio.h>
void main(){
	// To print 1, 2, 3, 4 on separete lines
	printf("Here is the first way:\n");
	printf("%d\n",1);
	printf("%d\n",2);
	printf("%d\n",3);
	printf("%d\n",4);

	printf("Here is another way:\n");
	int i = 0;
	while (i<=4) {
		printf("%d\n",i);
		i = i + 1;
	}

	// What about the sequence of instructions to compute the sum
}
