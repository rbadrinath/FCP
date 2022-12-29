I try to list a few interesting mistakes I see students make. Some of these seem obvious, but to a newbee they are not.

## General:
1. At an early stage of learning a common mistake is the concept of
   an assignment statement. Here is an example:
<pre>
   // We wish to compute the volume of a cube with side s:
   float vol, s;
   vol=s*s*s;		  // student assumes this sets up a relation/function!
   scanf("%f",&s);
   printf("%f",vol);  // student assumes that vol is automatically populated!
</pre>
   Student needs to understand that every statement is a 'do'! not a relation.

2. using "=" (the assignment operator) instead of the comparison operator "=="
   Most compilers these days flag a warning. But often students neglect it.
<pre>
      Wrong way			      The Right way
   if ( a = b )			   if ( a == b )
       printf("True");		       printf("True");
</pre>
3. Assume a function prototype declared as
<pre>
    int fact(int n){
     // assume we have written how to compute factorial and are returning it;
    }
</pre>
  Here is an incorrent call of the function:
<pre>
    void main(){
         int n,f;
         scanf("%d",&n);
	     f = fact();	// must pass the value here!
    }
</pre>

4. Incorrect use of scanf().  
   Often students use the newline or space character in the scanf.
   This often leads to issues when reading because space and newline
   mean something particular when used in the scanf context. In general
   avoid using these freely in the format string. At best a space between
   conversion specifiers is sufficient.

5. Incorrect use of getchar() or scanf() to read a single character. 
   A common mistake is when using getchar or scanf to read a regular character,
   typically the intention is to skip newlines and spaces and tabs.
   However a simple scanf("%c",&ch); gets into trouble (usually) because
   some other input has happened prior to this (maybe an integer is read).
   This results in the scanf returning immediately without waiting for the
   user to enter another character. (Typically a newline or space is
   read into ch.)  
   The right way to do this is to read the character with scanf(" %c",&ch);
   notice the extra space in the format string. This use is specifically in the case that
   the students wants to read a non-whitespace.

6. Incorrect understanding of break and return
<table>
  <tr>
    <td> The break  statement:</td> <td>   only works for loops and  switch
                           As soon as it is executed, the program goes
			   out of that loop or switch to the statement after it.</td>
  </tr>
 <tr>  <td>The return  statement:</td><td> works anywhere in a function
			   As soon as it is executed, the function finishes, ie
			   no other statement in the function is excuted.
			   Additionally, if a value is provided, that value
			   is the return value of the function.</td>
 </tr>
 <tr>  <td> The exit  call: </td><td>  exit() is not a C statement but a C function call.
			   As soon as it is executed, the program terminates, ie
			   no other statement in the program is executed.
			   Additionally, if a value is provided, that value
			   is the exit status of the program execution.</td>
 </tr>
</table>
<pre>
   // sample incorrect use
   // this function is to return 0 if a1!=a2 or if b1 != b2. Else it should return 1
   int equal_pairs(int a1, int a2, int b1, int b2){
	if (a1 != a2 )
		return 0;
	else
		return 1;
	if (b1 != b2 )
		return 0;
	else
		return 1;
   }
</pre>

7. Using variables without initializing them is always an issue.
   Students occasionally assume that variables must be zero by default.  
   Not true in C.  
   This mistake repeats quite often with arrays declared locally or
   allocated using malloc();

8. In general dont neglect warnings. They are trying to tell you something.
   By being more explicity, the warnings go away even if there is no problem.
   A typical example is one of implicit function declaration, indicating
   that a prototype is missing. Here is an example:
<pre>
   void main(){
        int i;
        i = test();
   }
   int test(int a){
        return a;
   }
</pre>
   This gives a warning about implicit function declaration, but the real
   problem is that the function expected an argument, not given in the call.
   So always give a prototype before using the function and do not neglect
   the 'implicit declaration' warning. Giving the correct prototype 
   would have given a nice error message.

9. Assuming incorrectly that the return value of a function is 0, even if no
   return statement is used. While some compilers do this, the language itself
   does not guarantee this. So do not make this assumption.
   The right way to do this is:
   * If the return type is given, make sure there is a 'return' satement.
   * If the return value is not used, make sure to 
     explicitly set the return type to void.
## Arrays
1. Copying arrays: 
   Student wants to copy a string in the array s[] to
   the newly allocated array in t:
<pre>
   char s[10] = "hello";
   chat *t = (char *) malloc(10);
   ...
   t = s;	// PROBLEM: This does not copy strings though it seems to work!!
   // Instead the right way to do this is:
   strcpy(t,s);
</pre>

## Operators
1. Comparing three numbers: students wants to check if a,b, and c are in
	increasing order:
<pre>
   if (a < b < c) 	// NOTE: will evaluate to true even if a=3, b=2, c=1
	printf("yes");
   //  The right way to do this is:
   if (a < b && b < c)
	printf("yes");
</pre>

## Pointers
1. Pointer to a variable:
<pre>
   int *p;
   *p=5;
      // Here the student assumed that since p was a pointer to an integer it must
      // already be pointing to an integer.
      // But that is not true. We must assign p the address of an integer before
      // we can use the expression "*p".
      // So..... a right way to do this is:
   int *p;
   int n;
   p=&n;
   *p=5;
</pre>
2. Never return a pointer to a local variables inside a function.
   Sometimes students return a pointer to a variable which is locally
   defined (automatic storage class). 
   Remember this variable itself does not exist beyond the function. So
   it will not work as intended. If you want to return a pointer then either
   malloc the variable or use directly what you get as a function parameter. Eg:
<pre>
   char * f(){
     char str[10];
     char * t;
     ...
     return(str);         // This is not ok!
     ...
     t = malloc(10);
     return t;		  // This is OK
   }
</pre>
Another example:
<pre>
   char * getname(){
        char n[10];
	scanf("%s",n);
	return n;	// PROBLEM here because it is address 
			// of the *local* variable called n;
   }
   //  INSTEAD, the correct way is:
   char * getname(){
        char * n;
	n = (char *)malloc(10* sizeof(char)); // dynamically allocated space
	scanf("%s",n);
	return n;	// OK because value of n is the malloc-ed location
   }
   nb: this error often happens with structures and arrays.
</pre>




