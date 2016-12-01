//Braedan Robinson 10188414
//Luisa Aimoli 10169687

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//struct Data {
//	int data;
//	struct Node* next;
//};
//struct Node *head;
//head->data = Data.len;

//void insert(int data, int n) {
//	Node* temp1 = new Node();
//	temp1->data = data;
//	temp->next = NULL;
//	if (n==1) {
//		temp->next = head;
//		head = temp1;
//		return;

//returns node data at given index
union Data get(int index) {

int count=0; //initialize index
struct node* current = head;
int length = LinkedListLength(current);

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
//dont forget to free the struct on maiin

//returns the length of the linked list
int length() {
	return head->data; //where the length is stored 
//update len insert;
//update len remove
}
