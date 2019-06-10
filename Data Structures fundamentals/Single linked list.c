#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct NODE
{
	char name;
	struct NODE *next;
};

typedef struct NODE *node;

node createNode();
void pushFront(char name);
void push(char name);
void print();
void popFront(node list);
void pop(node list);
void pop_char(node list, const char name);
void sort(node list);

node head = NULL;

void main(void)
{
	head = createNode();
	printf("node created\n");
	//pushFront('S');
	push('S');
	printf("pushed s\n");
	//pushFront('h');
	push('h');
	printf("pushed h\n");
	//pushFront('a');
	push('a');
	printf("pushed a\n");
	push('h');
	//pushFront('h');
	printf("pushed h\n");
	push('e');
	//pushFront('e');
	printf("pushed e\n");
	push('e');
	//pushFront('e');
	printf("pushed e\n");
	push('r');
	//pushFront('r');
	printf("pushed r\n");
	//printf("%c",head->next->next->name);
	print();
	pop_char(head,'r');
	//popFront(head);
	print();
	//popFront(head);
	print();
	//pop(head);
	//pop(head);
	print();
	free(head);	
}
node createNode(){	//allocates memory for a new node
	node tmp;
	tmp = (node)malloc(sizeof(struct NODE));
	tmp->next = NULL;
	tmp->name = ' ';
	return tmp;
}
void pushFront(char name){		//at the head
	node tmp = createNode();
	tmp->name = name;
	if(head->next == NULL){	
		printf("list is empty\n");	//list is empty
		head->next = tmp;
	}
	else{
		printf("list not empty\n");
		tmp->next = head->next;
		head->next =tmp;
	}
	return;
}
void push(char name){
	node tmp = createNode();
	tmp->name = name;
	if(head->next == NULL){
		printf("list is empty\n");
		head->next = tmp;
	}
	else{
		printf("list not empty\n");
		node i = head;
		while(1){
			if(i->next == NULL){
				i->next = tmp;
				break;
			}
			i = i->next;
		}
	}
	return;
}
void print(){
	node i = head->next;
	while(1){
		if(i->next == NULL){
			printf("%c\n",i->name);
			break;
		}
		printf("%c",i->name);
		i = i->next;
	}
}
void popFront(node list){
	list->next = list->next->next;
}
void pop(node list){
	node i = list->next;
	while(1){
		if(i->next->next == NULL){
			i->next = NULL;
			break;
		}
		i = i->next;
	}
}
void pop_char(node list, const char name){
	while(1){
		if(list->next == NULL){
			printf("element not found");
			break;
		}
		if(list->next->name == name){
			list->next = list->next->next;
			break;
		}
		list = list->next;
	}
	return;
}
void sort(node list)
{
	
}

