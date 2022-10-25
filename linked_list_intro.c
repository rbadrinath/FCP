#include <stdio.h>
#include <stdlib.h>

// Here is an interesting structure
struct node {
	int val;
	struct node * next;
};
// The above has two members one of which is a pointer type.

// Below is a simple funciton to get a new "struct node" node
struct node * new_node(){
	return (struct node *) malloc(sizeof(struct node));
}

// Here is how one struct node node can have its "next" field point 
// to another node.
void join_next(struct node *node1, struct node *node2){
	node1->next=node2;
}

// For fun here is a function that simply adds 10 new nodes one
// after the other to the end of a given node called node1.
void join_n_new(struct node *node1, int n){
	struct node * p=node1;
	for (int i; i <n ; i++){
		p->next=new_node();
		p=p->next;
	}
	// what is p at the end?
}


// Can you write a function to simply go throu all nodes in the 
// linked list of nodes and set the val field to some number, say 100.
void set_list_values( struct node * node){
}

// Can you write a function to read from the user values and add them
// as new nodes into an existing list who's only node in the beginning
// is given?
void read_list_values( struct node * node){
}

void main() {
	// figure out what you want to test here
}
