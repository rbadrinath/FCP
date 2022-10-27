#include <stdio.h>
#include <stdlib.h>
// Definition of the struct for a node of the linked list
struct node {
	int val;
	struct node * next;
};

struct node * new_node(){
	return (struct node *) malloc (sizeof(struct node));
}
//
// node_delete
// @function: remove a node from a linked list
// @params: head - the head node of the linked list
//          val - the val field of the node which must be removed
// @returns: the head of the list after removing the node
// @description:Return value is different from parameter 'head' only when
// 			the val field of the head matches the param val
// 		Only the first node with matching val field is removed
struct node * node_delete(struct node * head, int val){
	// @var l: node to match param 'val'  starts from the param 'head'
	// @var p: node previous to l, starts with NULL value
	struct node * l, * p;

	// @loop traverse l through all nodes in the list
	//       until matching node found OR end of list.
	for(l=head, p=NULL; l != NULL && l->val != val ; l=l->next) 
		p=l ; // remember the previous value
	// Now  l is NULL if val not in the list.
	// else l points to node to remove and p to l's previous node
	if ( l != NULL ) {  // Now we have a node to remove
		if ( p!= NULL)       // if p is not NULL, change it next
		    p->next=l->next;
		if ( l == head)      // if l is the first node, change head
		    head = l->next;
		free(l);   // free up the node that is delted
	}
	return head;		// returns the head to the modified list
}


// node_insert
// @function: insert a new node into the linked list
// @params: head - the head node of the linked list 
// 	    newval: the value of the new node to insert
// 	    oldval: the value of the node in the  linked list before which
// 	    		we wish to insert the new node
// @returns: the head of the modified linked list
// @description: Return value is different from param 'head' when
// 			the head node points to a node matching 'oldval'
//			OR when head is itself NULL
//		Only the first node matching oldval is considered
struct node * node_insert(struct node * head, int oldval, int newval){
	// @var l - the node to look for matching oldval
	// @var p - the node previous to 'l'
	struct node * l, * p;
	
	// @var new - points to the new node to hold 'newval'
	struct node * new= new_node();
	new->val=newval;

	// @loop traverse the list looking for node matching oldval
	for(l=head, p=NULL; l!= NULL && l->val != oldval ; l=l->next)
		p=l;
	if (l != NULL ) { // If oldval is found
		if ( p != NULL ) {   // If it has a valid previous node
			p->next=new;
			new->next=l;
		} else {             // if l is the head node itself
			new->next=l;
			head=new;
		}
		return head;
	}
	else  {		// If no node with oldval exists
		if ( p != NULL ) {  // It is a non-empty list 
			p->next=new;
			new->next=NULL;
		} else {	    // It is an empty list
			new->next=NULL;
			head=new;
		}
		return head;
	}
}

void print_list(struct node *head){
	if (head == NULL)
		printf("<empty> ");
	for( ; head != NULL ; head=head->next )
		printf("%d ", head->val);
	printf("\n");
}

struct node * find_node(struct node *head, int val){
	for( ; head !=NULL && head->val != val ; head=head->next )
		;
	return head;
}

// A simple test function
void main(){
	// lests create an empty linked list
	struct node * head = NULL;

	printf("At start: "); print_list(head);   // <empty>
	// lets add a new value
	head = node_insert(head, 0, 0);    		
	printf("After 0 added: "); print_list(head);       //  0
	// lets add stuff in a loop at the end
	for(int i=1;i<3;i++)
		head=node_insert(head, i, i );

	printf("After adding 1 and 2: "); print_list(head); // 0 1 2
	// now lets add somewhere in the middle
	for(int i=3;i<5;i++)
		head=node_insert(head, i%2, i);
	printf("After adding 3 and 4: "); print_list(head); // 4 0 3 1 2
	// expecting list 4 0 3 1 2

	// now lets do some deleting
	for(int i=4; i>2; i--)
		head=node_delete(head,i);
	printf("After deleting 4 and 3: "); print_list(head); // 0 1 2
	
	for(int i=2;i>0;i--)
		head=node_delete(head, i );
	printf("After deleting 2 and 1: "); print_list(head); // 0

	head=node_delete(head, 0);
	printf("After 0 deleted: "); print_list(head);       // empty

	head=node_delete(head, 0);
	printf("After trying to delete 0 again: "); print_list(head);  // empty 
}

// Experiment with gcc -fpreprocessed  -E ll.c
