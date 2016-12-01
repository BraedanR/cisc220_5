//Braedan Robinson 10188414
//Luisa Stocco

#include<stdio.h>

void insert(int index, union Data data) {

struct Node {

int index;
Data data;
struct Node* prev;
struct Node* next;
};

typedef struct Node Node;

if ( data.type == -1) {
Node* head = data.c;
}
if ( data.type == 1) {
Node* head = data.i;
}
if ( data.type == 0) {
Node* head = data.d;
}

}
