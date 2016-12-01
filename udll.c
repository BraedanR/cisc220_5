//Braedan Robinson 10188414
//Luisa Stocco

#include<stdio.h>

//void insert(int index, union Data data, int type) {

struct Node {
  union Data data;
  struct Node* prev;
  struct Node* next;
  int type;
};

void insert(int index, union Data data, int type) {

int listIndex = 1;

Node* head = NULL;
Node* last = NULL;

Node* newNode = (Node*) malloc(sizeof(struct Node));

for (Node *i = head; i!=NULL; i=i->next) {
  if (index == 1) {
     newNode->data = data;
     newNode->next = head->next;
     newNode->prev = NULL;
     head->next = newNode;
     newNode->type = type;
   }
  if (listIndex == index -1) {
     newNode->next = i->next;
     i->next->prev = newNode;
     i->next = newNode;
     if (i->next == NULL;) {
        last->prev = i;
     }
   }
  listIndex++;
 }      
}

void removeNode(int index) {
  for (Node *i = head; i!=NULL; i=i->next) {
     if (index == 1) {
        head->next = head->next->next;
        head->next->prev = head;
     }
     if (listIndex == index - 1) {
        i->next = i->next->next;
        i->next->next->prev = i;
     }
    listIndex++;
  }
}
