//Braedan Robinson 10188414
//Luisa Aimoli 10169687

#include<stdio.h>
#include<stdlib.h>

void insert(int index, union Data data, int type) {

*head->data = (head->data)+1;

int count = 0;

struct Node* newNode = (Node*) malloc(sizeof(struct Node*));
newNode->data = data;
newNode->type = type;
newNode->next = NULL;
newNode->type = type;

struct Node* current = afterhead;

if (index == 0) {
	newNode->next = afterhead;
	afterhead->next = NewNode;
	newNode->prev = afterhead;
	return;
} 

struct Node* temp = afterhead;
temp->type = NULL;

for (int i=0; i < index-2; i++) {
	temp = temp->next
}

if (temp->next == NULL) { //if index is the end of the list
	temp->next = newNode;
	last = newNode;
}

newNode->next = temp->next;
temp->next = newNode;

return;
}

void removeNode(int index) {

head->data = (head->data)-1;

struct Node* newNode = afterhead;
int count;

for (count = 0; count < index-2; count++) {
	newNode = newNode->next;
}
 //newNode points to (index-1) node
struct Node* temp = newNode->next; //indexth node
newNode->next = temp->next; //index+1 node

free(temp);
return;
}

//returns node data at given index
union Data get(int index) {

int count=0; //initialize index
struct node* current = afterhead;
int length = head->data;

if (index <= 0 || index > length) {
	printf("No node at this index!\n");
	exit(-1); //error
} else { 
	while (current != NULL) { //loop through link list
		if (count == index)
			return current->data;//or current.data //minimum number of iterations
		count++;
		current = current->next; //next node if not correct index
	}
}
}

//returns the length of the linked list
int length() {
	return head->data; //where the length is stored 
}


