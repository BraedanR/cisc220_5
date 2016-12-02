//Braedan Robinson 10188414
//Luisa Aimoli 10169687
#include <stdio.h>
#include "udll.h"

typedef union Data {

  int i;
  int* iPtr;
  float f;
  float* fPtr;
  char c[20];
  char* cPtr;
};

struct Node {
  struct Node* prev;
  struct Node* next;
  int type;
  union Data data;
};

struct Node last = NULL;
struct Node head; //global
struct Node afterhead; //global
head.data = NULL;
head.next = afterhead;
head.type = 0;

int main() {
  afterhead = NULL; //empty list
  union Data data;
  data.i = 0;
  insert(0, data, 0); //start length
  data.i = 10;
  insert(1, data, 0);
  data.f = 15.45;
  insert(2,data,2);
  get(1);
  length();
  removeNode(2);
  removeNode(1);
  length();
  
return 0;
}
