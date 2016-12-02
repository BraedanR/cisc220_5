//Braedan Robinson 10188414
//Luisa Aimoli 10169687

#include<stdio.h>
#include<stdlib.h>

struct Data {
  struct Node* prev;
  struct Node* next;
  int type;
  union Data data;
};

struct Node *last = NULL;
struct Node *head; //global
struct Node *afterhead; //global
head->data = 0; //start length
head->type = 0;
head->next = afterhead;

void insert(int index, union Data data, int type) {

head->data = (head->data)+1;

int count = 0;

struct Node* newNode = (Node*) malloc(sizeof(struct Node*));
newNode->data = data;
newNode->type = type;
newNode->next = NULL;
newNode->type = type;

struct Node* current = head;

if (index == 0) {
	newNode->next = head->next;
	head->next = NewNode;
	newNode->prev = head;
	return;
} 

struct Node* temp = head->next;
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

struct Node* newNode = head->next;
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
