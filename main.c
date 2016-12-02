//Braedan Robinson 10188414
//Luisa Aimoli 10169687
#include <stdio.h>
#include "udll.h"

int main() {
  afterhead = NULL; //empty list
  union Data data;
  data.i = 0;
  insert(0, data.i, 0); //start length
  head->type = 0;
  head->next = afterhead;
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
