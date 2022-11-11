#include <stdio.h>
int main(){
	int i1, i2;
	char c;
	/* operator in between:
	 * printf("Give me a simple arithmetic operation on integers "
	 * "like 4 - 3:\n");
	// Doesnt work:
	// scanf("%d %d ",&i1,&i2);
	// c = getchar();
	// Works:
	// scanf("%d ",&i1);
	// c = getchar();
	// scanf("%d",&i2);
	// Works
	// scanf("%d %c %d",&i1,&c,&i2);
	 */
	/* Operator at taken separately after operands:
	 */
	printf("Give me two integers :");
	scanf("%d %d",&i1,&i2);
	printf("Give me an operator: ");
	// Doesnt work:
	scanf("%c", &c);
	// Works:
	// scanf(" %c", &c);

	switch(c){
		case '+': printf("%d\n",i1+i2);
			  break;
		case '-': printf("%d\n",i1-i2);
			  break;
		case '*': printf("%d\n",i1*i2);
			  break;
		case '/': printf("%d\n",i1/i2);
			  break;
		default: printf("operator %c not implemented\n", c);
	}
}
