#include<stdio.h>
#include<stdlib.h>

// define types
typedef struct node Node;

struct node {
	int v;
	Node * next;
};

// define prototypes
Node * make_node(int v);
void show_ll(Node *head);
void show_last(Node *head);
Node * read_ll();
Node * rev_ll(Node * head);
Node * delete_last(Node *head);

// define the functions
Node * make_node(int v){
	Node *new=malloc(sizeof(Node));
	new->next=NULL;
	new->v=v;
	return  new;
}

int length_ll(Node * head){
	int i=0;
	for(;head;head=head->next)
		i++;
	return i;
}
void show_ll(Node *head){
	printf("head:");
	for(;head;head=head->next) printf("-->%d",head->v);
	printf("-->NULL");
	printf("\n");
}

// define globals and macros to substitute for scanf
// use myscan(v) in place of scanf("%d",&v) wherever you need to
// macros
#define STOP 100
#define myscan(x) x=Globe[globei=(globei+1)%10]
//#define readin(x) scanf("%d",&x)
#define readin(x) myscan(x)
// global variables
int Globe[10]={0,10,20,30,40,50,STOP,70,80,100};
int globei=0;

Node * read_ll(){
	int v;
	Node * head, *last;
	head=last=NULL;
	readin(v);
	if( v == STOP)
		return NULL;
	head=last=make_node(v);
	readin(v);
	while(v!=STOP) {
		Node *new=make_node(v);
		last->next=new;
		last=new;
		readin(v);
	}
	return head;
}

Node * rev_ll(Node * head){
	Node * new; //pointer to head of new ll

	// case of empty list or one node only
	if (!head || !head->next) return head;
	
	// the common case
	// invariant: 
	// head:: is never changed - it is always head of the original list
	// new::  points to the head of the new list - so to be returned
	for(new=head, head=head->next, new->next=NULL	// initialization
			;head!=NULL			// repeat until head==NULL
			;){
		Node *hn=head;		// hn: next candidate to be head of new list
		head=head->next;	// increment head
		hn->next=new;		// attach new to hn 
		new=hn;			// this is now head of the new list
	}
	return new;
}

Node * delete_last(Node *head){
	if ( head == NULL ) return NULL;  		// case of empty list case
	if ( head->next==NULL) {			// case of single node list
		free(head);
		return NULL;
	}
	// normal case: at least two nodes
	// idea is to make p to point to the previous to the last
	//    then free p->next and set p->next=NULL
	Node *p;
	for(p=head;p->next->next!=NULL;p=p->next);

	free(p->next);
	p->next=NULL;

	return head;
}

void show_last(Node *head){
	Node *p;
	for(p=head;p!=NULL && p->next!=NULL;p=p->next)      // Notice short circuit evaluation
		;
	if ( p ) 
		printf("%d ",p->v);
	else
		printf("**NN**");
}

Node * delete_node(Node *head, int v){
	// NULL list
	if(head==NULL) return NULL;
	// case head matches
	if(head->v==v) {
		Node *t=head;
		head=head->next;
		free(t);
		return head;
	}
	// case match is inside the list (not at head)
	// make p point to the node previous to the matching node
	Node *p;
	for(p=head; p->next!=NULL && p->next->v!=v ; p=p->next) // Notice short circuit evaluation
		;
	if (p->next!=NULL) {
		Node *t=p->next;
		p->next=t->next;
		free(t);
	}
	return head;
}

// main
int main(){
	Node * head=NULL;
	head=read_ll();
	printf("length is %d\n",length_ll(head));
	show_ll(head);
	head=rev_ll(head);
	show_ll(head);
	while(head){
		printf("Last is: "); show_last(head); printf("\n"); 
		head=delete_last(head);
		show_ll(head);
	}
	show_last(head);printf("\n");
}
