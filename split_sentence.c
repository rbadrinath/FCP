#include <stdio.h>
#include <stdlib.h>
#include <readline.h>
#include <history.h>
void split(const char s[]){
	char word[20]; 
	int i;
	for(i=0;s[i] != '\0';) {
		// eat all successive blank tab and newline
		while(s[i]==' ' || s[i]=='\t' || s[i]=='\n')
			i++;
		// put in w all the stuff that forms a word
		int w=0;
		while(s[i]!=' ' && s[i]!='\t' && s[i]!='\n' && s[i] != '\0')
			word[w++]=s[i++];
		word[w]='\0';
		// If a real word is found, then print it
		if(word[0] != '\0')
			printf("%s\n",word);

	}
}


void main(){
	// char s[100]="This is the  \n  house,  \t\t that Jack  \n   :  ??     built.";
	char *s = readline("> ");
	split(s);
}
