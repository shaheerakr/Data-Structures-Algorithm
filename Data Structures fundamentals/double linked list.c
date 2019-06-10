#include<stdio.h>
#include<stdlib.h>

struct NODE
{
	char name;
	struct NODE* next;
	struct NODE* prev;
};

typedef struct NODE* node;

node createNode();
void push(node* head, char name);
void print(node head);
void pushEnd(node* head,char name);
void printBack(node tail);

node tail = NULL;
node head = NULL;

void main(void){
	pushEnd(&tail,'S');
	pushEnd(&tail,'h');
	pushEnd(&tail,'a');
	pushEnd(&tail,'h');
	pushEnd(&tail,'e');
	pushEnd(&tail,'e');
	pushEnd(&tail,'r');
	print(head);
	printBack(tail);
	
	
}

/*
this function allocates the memory for a new node.
sets the next and previous pointers to null.
sets name variable to null.

return:
	returns a new empty node.
*/
node createNode(){
	node tmp;
	tmp = (node)malloc(sizeof(struct NODE));
	tmp->name = ' ';
	tmp->prev = NULL;
	tmp->next = NULL;
	printf("node created successfully\n");
	return tmp;
}

/*
pushes a new node at the begining of the list

parameters:
	node* head		takes the head pointer of the list to add the node
	char name		takes the data that have to be in the new node

*/
void push(node* head, char name){
	node tmp = createNode();
	tmp->name = name;
	tmp->next = *head;						//current head becomes next
	tmp->prev = NULL;
	int flag = 0;
	if((*head) != NULL){
		printf("list is not empty\n");
		(*head)->prev = tmp;				//previous head pointer to new node
	}
	else{
		printf("list is empty\n");
		flag = 1;							//to set tail to head for the first entry
	}
	(*head) = tmp;							//head pointer to new node
	printf("node added successfully\n");
	if(flag == 1)							//set tail of list to head if only one element in head
	{
		tail = *head;
		printf("tail set successfully\n");
	}
}

/*
pushes a new node at the end of the list

parameters:
	node* tail			takes the tail of the list
	char name			takes the data to put in the node
*/
void pushEnd(node* tail,char name){
	node tmp = createNode();
	int flag = 0; 
	tmp->name = name;						//puts data to the new node
	tmp->next = NULL;						//set the next of new node to null 
	tmp->prev = NULL;						//set the previous of new node to null
	if(*tail != NULL)						//checks if list is empty	
	{										//list not empty
		printf("list not empty\n");
		(*tail)->next = tmp;				//set the tail next pointer to new node
		tmp->prev = *tail;					//set the previous of new node to current tail 
	}
	else{
		printf("list is empty\n");
		flag = 1;
	}
	*tail = tmp;							//set the new node to the current tail
	if(flag)								//check if list was empty
	{										//list empty set the head to tail
		head = *tail;
		printf("head set to tail\n");
	}
}

/*
prints the linked list from current node to last

parameters:
	node head				takes the head of the list
*/
void print(node head){
	node i = head;
	while(i != NULL){
		printf("%c",i->name);
		i = i->next;
	}
	printf("\n");
}

/*
prints the list form current node to first

parameters:
	node tail			takes the tail of the list
*/
void printBack(node tail){
	node i = tail;
	while(i != NULL){
		printf("%c",i->name);
		i = i->prev;
	}
	printf("\n");
	
}

