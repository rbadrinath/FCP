#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

char * concatenate(char * name1, ...)
{
    va_list ap;
    char * final=malloc(100);
    final[0]='\0';
    strcpy(final,name1);
    char *p;
    va_start(ap, name1); // Use last named para of this function
    while( (p=va_arg(ap,char *)) != NULL) {
        // ps is the next argument as a (char *)
        // We expect NULL argument to indicate end of the args
        // alternately we could pass a count as a first arg
        
        // Add the string p to our local string variable
        strcat(final,p); 
    }
    va_end(ap);
    return final;
}

void main(){
    printf("%s\n",concatenate( "This ","is ", "nirvana.", " Always", " to ", "be happy!", NULL));
}