//Braedan Robinson 10188414
//Luisa Stocco
#include <stdio.h>
#include "udll.h"

union Data {

  int i;
  int* iPtr;
  float f;
  float* fPtr;
  char c[20];
  char* cPtr;
};

int main() {
  int index = 1;
  union Data data;
  data.i = 10;
  insert(index, data, 0);
  data.f = 15.45;
  index = 2;
  insert(index,data,2); 
  index = 3;
  removeNode(index);
  index = 1; 
  removeNode(index);
return 0;
}
