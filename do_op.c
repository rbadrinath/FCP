#include <stdio.h>
int main(){
	printf("Give me two ints and a character");
	int i1, i2;
	scanf("%d %d ",&i1,&i2);
	char c = getchar();
	switch(c){
		case '+': printf("%d",i1+i2);
			  break;
		case '-': printf("%d",i1-i2);
			  break;
		default: printf("not implemented\n");
	}
}
