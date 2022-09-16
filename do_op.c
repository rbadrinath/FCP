#include <stdio.h>
int main(){
	printf("Give me a simple arithmetic operation on integers "
			"like 4 - 3:\n");
	int i1, i2;
	//scanf("%d %d ",&i1,&i2);
	//char c = getchar();
	scanf("%d ",&i1);
	char c = getchar();
	scanf("%d",&i2);
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
